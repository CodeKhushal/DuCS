/*
    13. Write a Program to accept the truth values of variables
    x and y, and print the truth table of the following logical
    operations:
    a) Conjunction          f) Exclusive NOR
    b) Disjunction          g) Negation
    c) Exclusive OR         h) NAND
    d) Conditional          i) NOR
    e) Bi-conditional
*/
#include <iostream>
#include <set>
#include <stdio.h>
#include <iomanip>
using namespace std;
int exOR()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x XOR y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", i ^ j);
            cout << "\n";
        }
    }
    return 0;
}
int conj()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x AND y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", i && j);
            cout << "\n";
        }
    }
    return 0;
}
int disj()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x OR y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", i || j);
            cout << "\n";
        }
    }
    return 0;
}
int cond()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x --> y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", !i || j);
            cout << "\n";
        }
    }
    return 0;
}
int biCond()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x <--> y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", ((!i || j) && (!j || i)));
            cout << "\n";
        }
    }
    return 0;
}
int exNOR()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x XOR y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", !(i ^ j));
            cout << "\n";
        }
    }
    return 0;
}
int neg()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(7) << "x'\n";
    cout << "   -------------\n";
    for (int i = 0; i <= 1; i++)
    {
        cout << setw(5) << i << setw(5) << "|";
        cout << "    ";
        printf("%d", !i);
        cout << "\n";
    }
    return 0;
}
int nand()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x NAND y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", !(i && j));
            cout << "\n";
        }
    }
    return 0;
}
int nor()
{
    cout << setw(5) << "x" << setw(5) << "|" << setw(5) << "y" << setw(5) << "|" << setw(10) << "x NOR y\n";
    cout << "   -------------------------\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << setw(5) << i << setw(5) << "|" << setw(5) << j << setw(5) << "|";
            cout << "    ";
            printf("%d", !(i || j));
            cout << "\n";
        }
    }
    return 0;
}
int main()
{
    cout << "Conjuction of x and y" << endl;
    conj();
    cout << endl
         << endl;
    cout << "Disjunction of x and y" << endl;
    disj();
    cout << endl
         << endl;
    cout << "XOR of x and y" << endl;
    exOR();
    cout << endl
         << endl;
    cout << "Conditional of x and y" << endl;
    cond();
    cout << endl
         << endl;
    cout << "Bi-Conditional of x and y" << endl;
    biCond();
    cout << endl
         << endl;
    cout << "XNOR of x and y" << endl;
    exNOR();
    cout << endl
         << endl;
    cout << "Negation of x and y" << endl;
    neg();
    cout << endl
         << endl;
    cout << "NAND of x and y" << endl;
    nand();
    cout << endl
         << endl;
    cout << "NOR of x and y" << endl;
    nor();
}
