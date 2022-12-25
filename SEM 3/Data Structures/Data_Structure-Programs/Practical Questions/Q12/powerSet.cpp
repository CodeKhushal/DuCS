/*
    12. For any number n, write a program to list all the solutions 
    of the equation x1 + x2 + x3 + …+ xn = C, where C is a constant 
    (C<=10) and x1, x2,x3,…,xn are nonnegative integers using 
    brute force strategy.
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void display(int x, int sets[])
{
    for (int i = 0; i <= x; i++)
    {
        cout << sets[i];
    }
    cout << endl;
}

void sum(int p, int sets[])
{
    int s = 0;
    for (int i = 0; i <= p; i++)
    {
        s = s + sets[i];
    }
    if (s <= 10)
        display(p, sets);
}

void printPowerSet(int set_size, int sets[])
{
    long pow_set_size = (long)pow(2, set_size);
    int counter, j;
    int a[1024];
    int p = 0;
    for (counter = 0; counter < pow_set_size; counter++)
    {
        for (j = 0; j < set_size; j++)
        {
            if ((counter & (1 << j)) > 0)
            {
                a[p] = sets[j];
                p++;
            }
        }
        sum(p, a);
        p = 0;
    }
}

int main()
{
    int sets[10] = {};
    int a = 0;
    cout << "Enter the 10 elements of set: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        sets[i] = a;
    }
    printPowerSet(10, sets);
    return 0;
}
