/*
QUESTION-6: Write a function to find whether a given no. is Prime or not. Use the same to generate prime numbers less than 100.
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
 
bool checkPrime(int num)
{
    if (num <= 1)
        return false;
    else
        for (int i = 2; i < num; i++)
        {
          if (num % i == 0) //checking by dividing the number by 2 till number itself
                return false;
        }
    return true;
}
 
int main()
{
    int x;
    do
    {
        cout << "To Check an integer for prime press: 1" << endl
             << "To Print Prime numbers till 100 press: 2" << endl
             << "To exit press: 3" << endl
             << endl
             << "Enter your choice: ";
        cin >> x;
        switch (x)
        {
        case (1):
        {
          int n;
          cout << "Enter an integer to check whether it is a prime number or not: ";
            cin >> n;
 
            if (checkPrime(n))
                cout << "'" << n << "'"
                     << " is a prime number." << endl
                     << endl;
            else
                cout << "'" << n << "'"
                     << " is not a prime number." << endl
                     << endl;
            break;
        }
        case (2):
        {
            cout << "Printing Prime Numbers upto 100......." << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            int i = 2;
            while (i < 100)
            {
                if (checkPrime(i))
                    cout << i << " ";
                i++;
            }
            cout << endl
                 << endl;
            break;
        }
        }
    } while (x < 3);
    return 0;
}
