/*
    15. Write a Program to store a function (polynomial/exponential), and then evaluate the
    polynomial. (For example store f(x) = 4n3 + 2n + 9 in an array and for a given value
    of n, say n = 5, evaluate (i.e. compute the value of f(5)).
*/
#include <bits/stdc++.h>
using namespace std;

class P
{
public:
    int coef, expo;
};

int main()
{
    int comp;

    cout << "Enter the number of components in your polynomial equation:  ";
    cin >> comp;

    P poly[comp];

    for (int i = 0; i < comp; i++)
    {
        cout << "Enter co-efficient of (" << (i + 1) << ") :  ";
        cin >> poly[i].coef;
        cout << "Enter exponent of (" << (i + 1) << ") :  ";
        cin >> poly[i].expo;
    }

    cout << "Entered polynomial equation is:" << endl;
    for (int i = 0; i < comp; i++)
    {
        cout << poly[i].coef;
        cout << "(x^";
        cout << poly[i].expo;
        cout << ") ";
        if (i != (comp - 1))
        {
            cout << " + ";
        }
    }
    cout << endl
         << endl;

    int x;
    cout << "Enter the value of x:  ";
    cin >> x;

    int sum = 0;

    for (int i = 0; i < comp; i++)
    {
        sum += poly[i].coef * pow(x, poly[i].expo);
    }

    cout << "The value of given equation is: " << sum;

    return 0;
}
