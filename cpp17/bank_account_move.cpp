#include "bank_account_move.h"
#include <stdexcept>
namespace BankaccountMove {
    Bankaccount::Bankaccount() {
        balance_ = 0;
        status_ = Status::CLOSED;
    }
    void Bankaccount::open() {
        if (status_ == Status::OPEN) { throw std::runtime_error("account is already open"); }

        status_ = Status::OPEN;
    }
    void Bankaccount::close() {
        if (status_ == Status::CLOSED) { throw std::runtime_error("account is closed"); }
        balance_ = 0;
        status_ = Status::CLOSED;
    }
    void Bankaccount::deposit(int amount) {
        if (status_ == Status::CLOSED) { throw std::runtime_error("account is closed"); }
        if (amount < 0) { throw std::runtime_error("cannot deposit a negative amount"); }

        balance_ += amount;
    }
    void Bankaccount::withdraw(int amount) {
        if (status_ == Status::CLOSED) { throw std::runtime_error("account is closed"); }
        if (balance_ < amount) { throw std::runtime_error("insufficient balance"); }
        if (amount < 0) { throw std::runtime_error("cannot withdraw a negative amount"); }

        balance_ -= amount;
    }
    int Bankaccount::balance() {
        if (status_ == Status::CLOSED) { throw std::runtime_error("account is closed"); }

        return balance_;
    }
}//namespace BankaccountMove