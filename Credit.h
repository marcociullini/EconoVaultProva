//
// Created by ciullo on 26/05/24.
//

#ifndef ECONOVAULT_CREDIT_H
#define ECONOVAULT_CREDIT_H
#include <ctime>
#include <iostream>
#include <string>
#include "Transaction.h"

template <typename T>
class Credit : public Transaction {
public:
    explicit Credit(float amount) : amount(amount){
        time_t rawTime;
        std::time(&rawTime);
        struct tm* rawTimeA;
        rawTimeA = localtime(&rawTime);
        dateTime = asctime(rawTimeA);
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

    void printTransaction(Transaction&) const {
        std::cout << "Transaction: " << transactionType << " out" << ", amount: " << amount << ", time info: " << dateTime << std::endl;
    }

private:
    float amount;
    std::string dateTime;
    T transactionType;

};


#endif //ECONOVAULT_CREDIT_H
