#include "bank_account_cgpt.h"


namespace BangaAkkauntu {
    BankAccount::BankAccount() : name(""), balance(0.0) {}

    BankAccount::BankAccount(const std::string& name, double balance) :
        name(name), balance(balance) {}

    void BankAccount::deposit(double amount) {
        balance += amount;
    }

    void BankAccount::withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            // throw an error
        }
    }

    double BankAccount::get_balance() const {
        return balance;
    }

    std::string BankAccount::get_name() const {
        return name;
    }
}// namespace BangaAkkauntu
