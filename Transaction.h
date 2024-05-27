//
// Created by ciullo on 26/05/24.
//

#ifndef ECONOVAULT_TRANSACTION_H
#define ECONOVAULT_TRANSACTION_H


class Transaction {
public:
    virtual void printTransaction() const = 0;
    virtual Transaction operator =(const Transaction &right) = 0;
};


#endif //ECONOVAULT_TRANSACTION_H
