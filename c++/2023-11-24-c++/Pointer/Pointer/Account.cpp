#include "AccountHeader.h"
#include <iostream>

void Account::SetBalance(double newBalance)
{
    balance = newBalance;
}

void Account::GetBalance()
{
    std::cout << "Balance: " << balance << std::endl;
}