#pragma once
#include "BankAccount.h"
class Checking :
    public BankAccount
{
private:
    double Fee;
public:
    Checking() : BankAccount() {
        Fee = 0;
    }
    Checking(char* title, char* accountNumber, double accountBalance, double fee = 0) : BankAccount(title, accountNumber, accountBalance) {
        Fee = fee;
    }
    Checking(const Checking& ref) : BankAccount(ref) {
        Fee = ref.Fee;
    }
    void Deposit(double amount) {
        double temp = getAcountBalance();
        if (temp + amount >= Fee)
        {
            setAcountBalance((temp + amount) - Fee);
            cout << "Transaction Successful!\n";
        }
        else
        {
            cout << "Transaction Failed!\n";
            exit(-1);
        }
    }
    virtual void Withdraw(double amount) {
        double temp = getAcountBalance();
        if (amount <= (temp + Fee))
        {
            setAcountBalance(temp - (amount + Fee));
            cout << "Transaction Successful!\n";
        }
        else
        {
            cout << "Transaction Failed!\n";
            exit(-1);
        }
    }
    void setFee(double fee) {
        Fee = fee;
    }
    double getFee() const
    {
        return Fee;
    }
    void Display() const {
        BankAccount::Display();
        cout << "Fee : " << Fee << endl;
    }
    bool operator ==(Checking& obj) {
        bool flag = false;
        if ((obj.getTitle() == getTitle()) && (obj.getAcountNumber() == getAcountNumber()) && (obj.getAcountBalance() == getAcountBalance()) && (obj.getFee() == Fee))
            flag = true;
        return flag;
    }
    bool operator !=(Checking& obj) {
        bool flag = false;
        if ((obj.getTitle() != getTitle()) && (obj.getAcountNumber() != getAcountNumber()) && (obj.getAcountBalance() != getAcountBalance()) && (obj.getFee() != Fee))
            flag = true;
        return flag;
    }
    virtual void operator =(Checking& obj) {
        setAcountBalance(obj.getAcountBalance());
        setAcountNumber(obj.getAcountNumber());
        setTitle(obj.getTitle());
        Fee = obj.Fee;
    }
    ~Checking() {
        Fee = 0;
    }
};

