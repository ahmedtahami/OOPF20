#pragma once
#include "Current.h"
class Investment :
    public Current
{
private:
    double ProfitPercentage;
public:
    Investment() : Current() {
        ProfitPercentage = 0;
    }
    Investment(char* title, char* accountNumber, double accountBalance, double profitPercentage = 0, double minimumBalance = 0, double fee = 0) : Current(title, accountNumber, accountBalance, fee) {
        ProfitPercentage = profitPercentage;
    }
    Investment(const Investment& ref) : Current(ref) {
        ProfitPercentage = ref.ProfitPercentage;
    }    
    void setProfitPercentage(double profitPercentage) {
        ProfitPercentage = profitPercentage;
    }
    double getProfitPercentage() const
    {
        return ProfitPercentage;
    }
    void Display() const {
        BankAccount::Display();
        cout << "Profit Percentage : " << ProfitPercentage << endl;
    }
    bool operator ==(Investment& obj) {
        bool flag = false;
        if ((obj.getTitle() == getTitle()) && (obj.getAcountNumber() == getAcountNumber()) && (obj.getAcountBalance() == getAcountBalance()) && (obj.getFee() == getFee()) && (obj.getMinimumBalance() == getMinimumBalance()) && (obj.getProfitPercentage() == ProfitPercentage))
            flag = true;
        return flag;
    }
    bool operator !=(Investment& obj) {
        bool flag = false;
        if ((obj.getTitle() != getTitle()) && (obj.getAcountNumber() != getAcountNumber()) && (obj.getAcountBalance() != getAcountBalance()) && (obj.getFee() != getFee()) && (obj.getMinimumBalance() != getMinimumBalance()) && (obj.getProfitPercentage() != ProfitPercentage))
            flag = true;
        return flag;
    }
    void operator =(Investment& obj) {
        setAcountBalance(obj.getAcountBalance());
        setAcountNumber(obj.getAcountNumber());
        setTitle(obj.getTitle());
        setFee(obj.getFee());
        setMinimumBalance(obj.getMinimumBalance());
        ProfitPercentage = obj.ProfitPercentage;
    }
    ~Investment() {
        ProfitPercentage = 0;
    }
};

