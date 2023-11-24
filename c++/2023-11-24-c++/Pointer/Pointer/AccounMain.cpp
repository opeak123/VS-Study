#include "AccountHeader.h"

int main()
{
    Account* a = new Account();

    a->GetBalance();
    a->SetBalance(10.1);
    a->GetBalance();

    delete a;

    return 0;
}
