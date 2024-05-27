//
// Created by ciullo on 26/05/24.
//

#ifndef ECONOVAULT_DEBIT_H
#define ECONOVAULT_DEBIT_H
#include <ctime>
#include <iostream>
#include <string>
#include "Transaction.h"

template<typename T>
class Debit : public virtual Transaction {
public:
    explicit Debit(float amount) : amount(amount){
        time_t rawTime;
        std::time(&rawTime);
        struct tm* rawTimeA;
        rawTimeA = localtime(&rawTime);
        dateTime = asctime(rawTimeA);
    }
    Debit operator =(const Debit &right) override{
        if(this != &right) {
            amount = right.amount;
            dateTime = right.dateTime;
            transactionType = right.transactionType;
        }
    }

    float getAmount() const {
        return amount;
    }

    void setAmount(float a){
        this->amount = a;
    }

    std::string getDateTime() const{
        return this->dateTime;
    }

    void setDateTime(){
        time_t rawTime;
        std::time(&rawTime);
        struct tm* rawTimeA;
        rawTimeA = localtime(&rawTime);
        this->dateTime = asctime(rawTimeA);
    }

    virtual void printTransaction() const {
        std::cout << "Transaction: " << transactionType << " in" << ", amount: " << amount << ", time info: " << dateTime << std::endl;
    }

private:
    float amount;
    std::string dateTime;
    T transactionType;

};


#endif //ECONOVAULT_DEBIT_H
