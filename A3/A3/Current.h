#pragma once
#include "Checking.h"
class Current :
    public Checking
{
private:
    double MinimumBalance;
public:
    Current() : Checking() {
        MinimumBalance = 0;
    }
    Current(char* title, char* accountNumber, double accountBalance, double minimumBalance = 0, double fee = 0) : Checking(title, accountNumber, accountBalance, fee) {
        MinimumBalance = minimumBalance;
    }
    Current(const Current& ref) : Checking(ref) {
        MinimumBalance = ref.MinimumBalance;
    }
    void Withdraw(double amount) {
        double temp = getAcountBalance();
        double fee = getFee();
        if (amount +  fee <= temp)
        {
            if (temp - (amount + fee) >= MinimumBalance)
            {
                setAcountBalance(temp - (amount + fee));
                cout << "Transaction Successful!\n";
            }
            else
            {
                cout << "Min. Amount Exceeded\n";
                exit(-1);
            }
        }
        else
        {
            cout << "Transaction Failed!\n";
            exit(-1);
        }
    }
    void setMinimumBalance(double minimumBalance) {
        MinimumBalance = minimumBalance;
    }
    double getMinimumBalance() const
    {
        return MinimumBalance;
    }
    bool operator ==(Current& obj) {
        bool flag = false;
        if ((obj.getTitle() == getTitle()) && (obj.getAcountNumber() == getAcountNumber()) && (obj.getAcountBalance() == getAcountBalance()) && (obj.getFee() == getFee()) && (obj.getMinimumBalance() == getMinimumBalance()))
            flag = true;
        return flag;
    }
    void Display() const {
        BankAccount::Display();
        cout << "Minimum Balance : " << MinimumBalance << endl;
    }
    bool operator !=(Current& obj) {
        bool flag = false;
        if ((obj.getTitle() != getTitle()) && (obj.getAcountNumber() != getAcountNumber()) && (obj.getAcountBalance() != getAcountBalance()) && (obj.getFee() != getFee()) && (obj.getMinimumBalance() != getMinimumBalance()))
            flag = true;
        return flag;
    }
    void operator =(Current& obj) {
        setAcountBalance(obj.getAcountBalance());
        setAcountNumber(obj.getAcountNumber());
        setTitle(obj.getTitle());
        setFee(obj.getFee());
        MinimumBalance = obj.MinimumBalance;
    }
    ~Current() {
        MinimumBalance = 0;
    }
};

