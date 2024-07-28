/*
QUESTION-7: Write a program to compute the factors of a given number.
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
int main()
{
    int num, factor;
    cout << "Enter an integer to get it's factors: ";
    cin >> num;
    cout << "Factors of '" << num << "' are: ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i;
            if (i < num)
            {
                cout << ", ";
            }
        }
        }
    cout << endl;
    return 0;
}
