#if !defined(BANK_ACCOUNT_MOVE_H)
#define BANK_ACCOUNT_MOVE_H
namespace BankaccountMove {
    enum class Status { OPEN, CLOSED };
    class Bankaccount {
    public:
        // Constructor
        Bankaccount();
        // Methods
        void open();
        void close();
        void deposit(int amount);
        void withdraw(int amount);
        int balance();
    private:
        int balance_;
        Status status_;
    };  // class Bankaccount

}  // namespace Bankaccount
#endif  // BANK_ACCOUNT_MOVE_H
