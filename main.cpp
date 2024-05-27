#include <iostream>

/*/int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/

#include "PlannedTransaction.h"

int main() {
    // Creazione di un oggetto Date
    Date d(15, 5, 2024);

    // Creazione di una PlannedTransaction
    PlannedTransaction<std::string> pt(100.0f, d);

    // Stampa dei valori della transazione
    pt.printTransaction();

    return 0;
}