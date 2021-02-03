#pragma once
#include "BankAccount.h"
class Savings :
    public BankAccount
{
private:
    double IntrestRate;
public:
    Savings() : BankAccount() {
        IntrestRate = 0;
    }
    Savings(char* title, char* accountNumber, double accountBalance, double intrestRate = 0) : BankAccount(title,accountNumber,accountBalance) {
        IntrestRate = intrestRate;
    }
    Savings(const Savings& ref) : BankAccount(ref) {
        IntrestRate = ref.IntrestRate;
    }
    double calculateIntrest() const {
        double A = getAcountBalance() * (1 + IntrestRate * 1); //I am assuming time(t) for one year
        double I = A - getAcountBalance();
        return I;
    }
    void Deposit(double amount) {
        double temp = getAcountBalance();
        setAcountBalance(temp + amount);
        cout << "Transaction Successful!\n";
    }
    void Withdraw(double amount) {
        double temp = getAcountBalance();
        if (amount <= temp)
        {
            setAcountBalance(temp - amount);
            cout << "Transaction Successful!\n";
        }
        else
        {
            cout << "Transaction Failed!\n";
            exit(-1);
        }
    }
    void setIntrestRate(double intrestRate) {
        IntrestRate = intrestRate;
    }
    double getIntrestRate() const
    {
        return IntrestRate;
    }
    void Display() const {
        BankAccount::Display();
        cout << "Intrest Rate : " << IntrestRate << endl;
        cout << "Intrest : " << calculateIntrest() << endl;
    }
    bool operator ==(Savings& obj) {
        bool flag = false;
        if ((obj.getTitle() == getTitle()) && (obj.getAcountNumber() == getAcountNumber()) && (obj.getAcountBalance() == getAcountBalance()) && (obj.getIntrestRate() == IntrestRate))
            flag = true;
        return flag;
    }
    bool operator !=(Savings& obj) {
        bool flag = false;
        if ((obj.getTitle() != getTitle()) && (obj.getAcountNumber() != getAcountNumber()) && (obj.getAcountBalance() != getAcountBalance()) && (obj.getIntrestRate() != IntrestRate))
            flag = true;
        return flag;
    }
    void operator =(Savings& obj) {
        setAcountBalance(obj.getAcountBalance());
        setAcountNumber(obj.getAcountNumber());
        setTitle(obj.getTitle());
        IntrestRate = obj.IntrestRate;
    }
    ~Savings() {
        IntrestRate = 0;
    }
};

