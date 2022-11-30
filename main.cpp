//main.cpp
#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
    Bank n(2);
    n.print();
    n.addAcc();
    n.sortList();
    n.print();
    n.delAcc(0);
    n.print();
    return 0;
}

