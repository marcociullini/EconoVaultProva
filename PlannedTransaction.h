//
// Created by ciullo on 27/05/24.
//

#ifndef ECONOVAULT_PLANNEDTRANSACTION_H
#define ECONOVAULT_PLANNEDTRANSACTION_H
#include "Credit.h"
#include "Debit.h"
#include "Date.h"

template <typename T>
class PlannedTransaction : public Credit <T> , public Debit <T> {
public:
    PlannedTransaction(float amount, Date d) : Credit<T>(amount > 0 ? amount : 0), Debit<T>(amount <= 0 ? -amount : 0) {
        if(amount > 0){  //FIXME come mai non posso farlo nel corpo del costruttore
            T Transaction = static_cast<Credit<T>*>(this);  //FIXME ma solo come lista di inizializzazione?

        } else
            T Transaction = static_cast<Debit<T>*>(this);

        if(d.validDate(d.getDay(), d.getMonth(), d.getYear()))
            date = d;
    }

    void printTransaction() const override{
        T Transaction.printTransaction();
        std::cout << ", date: " << date.printDate() << std::endl;
    }
protected:
    Date date;
};


#endif //ECONOVAULT_PLANNEDTRANSACTION_H
