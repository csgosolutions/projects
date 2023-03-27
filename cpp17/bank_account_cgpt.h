#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

namespace BangaAkkauntu {
    class BankAccount {
    private:
        std::string name;
        double balance;
    public:
        BankAccount();
        BankAccount(const std::string& name, double balance);

        void deposit(double amount);
        void withdraw(double amount);
        double get_balance() const;
        std::string get_name() const;
    };
}// namespace BangaAkkauntu

#endif
