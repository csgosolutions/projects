#if !defined(BANK_ACCOUNT_H)
#define BANK_ACCOUNT_H
#include <mutex>
#include <optional>
namespace Bankaccount {
	using balance_t = int;
	class Bankaccount {
	public:
		// Account Actions
		auto open() -> void;
		auto close() -> void;
		// Balance Actions
		auto deposit(balance_t balance) -> void;
		auto withdraw(balance_t balance) -> void;
		// Querries
		auto balance()->balance_t;
	private:
		std::optional<balance_t> mBalance;
		std::mutex mMutex;
	}; // class Bankaccount
} // namespace Bankaccount
#endif // BANK_ACCOUNT_H