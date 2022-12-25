/*
    11. Write a Program to calculate Permutation and Combination for an input value n and r using
    recursive formula of nCr and nPr .
*/
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int permutation(int n, int r)
{
    int num, denom;

    num = factorial(n);
    denom = factorial(n - r);

    return num / denom;
}

int combination(int n, int r)
{
    int num, denom;
    int denom1, denom2;

    num = factorial(n);
    denom1 = factorial(r);
    denom2 = factorial(n - r);

    denom = denom1 * denom2;

    return num / denom;
}

int main()
{
    int n, r;

    cout << "Enter value of n:  ";
    cin >> n;
    cout << "Enter value of r:  ";
    cin >> r;

    cout << "Permutation:  " << permutation(n, r);
    cout << endl;
    cout << "Combination:  " << combination(n, r);

    return 0;
}
