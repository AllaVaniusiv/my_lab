//main.cpp
#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
    Bank n(2);
    n.print();
    n.add_acc();
    n.descending_sort();
    n.print();
    n.del_acc(0);
    n.print();
    return 0;
}

