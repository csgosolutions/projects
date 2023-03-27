#include "bank_account.h"
#include <optional>
#include <stdexcept>
namespace Bankaccount {
    auto Bankaccount::open() -> void {
        std::lock_guard<std::mutex> lock{ mMutex };
        if (mBalance.has_value())
            throw std::runtime_error("Cannot open opened account.");
        mBalance.emplace(0u);
    }
    auto Bankaccount::close() -> void {
        std::lock_guard<std::mutex> lock{ mMutex };
        if (!mBalance.has_value())
            throw std::runtime_error("Cannot close closed account.");
        mBalance = std::nullopt;
    }
    auto Bankaccount::deposit(balance_t balance) -> void {
        std::lock_guard<std::mutex> lock{ mMutex };
        if (!mBalance.has_value())
            throw std::runtime_error("Cannot deposit on closed account.");
        if (balance < 0)
            throw std::runtime_error("Cannot deposit negative amount.");
        *mBalance += balance;
    }
    auto Bankaccount::withdraw(balance_t balance) -> void {
        std::lock_guard<std::mutex> lock{ mMutex };
        if (!mBalance.has_value())
            throw std::runtime_error("Cannot withdraw on closed account.");
        if (*mBalance < balance)
            throw std::runtime_error("Cannot withdraw more than available balance.");
        if (balance < 0)
            throw std::runtime_error("Cannot whitdraw negative amount.");
        *mBalance -= balance;
    }
    auto Bankaccount::balance() -> balance_t {
        std::lock_guard<std::mutex> lock{ mMutex };
        if (!mBalance.has_value())
            throw std::runtime_error("Cannot access balance from closed account.");
        return mBalance.value();
    }
} // namespace Bankaccount