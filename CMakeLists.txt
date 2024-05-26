cmake_minimum_required(VERSION 3.28)
project(EconoVault)

set(CMAKE_CXX_STANDARD 11)

add_executable(EconoVault main.cpp
        Transaction.h
        Credit.cpp
        Credit.h
        Debit.cpp
        Debit.h
        PlannedTransaction.cpp
        PlannedTransaction.h
)
