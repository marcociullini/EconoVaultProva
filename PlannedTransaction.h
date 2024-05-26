//
// Created by ciullo on 27/05/24.
//

#ifndef ECONOVAULT_PLANNEDTRANSACTION_H
#define ECONOVAULT_PLANNEDTRANSACTION_H
#include "Credit.h"
#include "Debit.h"

template <typename T>
class PlannedTransaction : public Credit <T> , public Debit <T> {
public:
    PlannedTransaction(float amount){
        if(amount > 0)
            T Credit(this->amount);
        else
            T Debit(this->amount);
    }
protected:
    int date;
};


#endif //ECONOVAULT_PLANNEDTRANSACTION_H
