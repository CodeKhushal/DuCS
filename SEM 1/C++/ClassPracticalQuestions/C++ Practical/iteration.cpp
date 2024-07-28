/*
QUESTION-14: Write a program using iteration to:
(a) Display the Fibonacci Series
(b) Calculate Factorial of a Number
(c) Calculate GCD of Two Numbers
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout << "MENU---->" << endl;
        cout << " (1)Display Fibonacci Series\n"
             << " (2) Calculate Factorial of a Number\n"
             << " (3) Calculate GCD of Two Numbers\n"
             << " (0) Exit the program\n";
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case (1):
        {
            int n;
            cout << "\nEnter the number of terms: ";
            cin >> n;
            cout << "First " << n << " terms of the Fibonacci series: ";
            for (int i = 0, next, first = 0, second = 1; i < n; i++){
                if (i <= 1)
                    next = i;
                else{
                    next = first + second;
                    first = second;
                    second = next;
                }
                cout << next << " ";
            }
            cout << endl
                 << endl;
            break;
        }
        case (2):
        {
            int n;
            cout << "\nEnter a positive integer: ";
            cin >> n;
            int product = 1;
            for (int i = n; i > 0; i--)
                product *= i;
            cout << "Factorial of " << n << ": " << product << endl
                 << endl;
            break;
        }
        case (3):
        {
            int x, y, gcd;
            cout << "\nEnter two positive integers: ";
            cin >> x >> y;
            for (int i = 1; i <= x && i <= y; i++)
                if (x % i == 0 && y % i == 0)
                    gcd = i;
            cout << "GCD of " << x << " and " << y << ": " << gcd << endl
                 << endl;
            break;
        }
        default:
            break;
        }
    } while (choice != 0);
    return 0;
}
