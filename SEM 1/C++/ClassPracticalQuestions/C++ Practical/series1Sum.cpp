/*
QUESTION-2: Write a program to compute the sum up to the n terms of the following series:
𝑆=1+ 1/2+ 1/3+ 1/4+ 1/5+ 1/6+ 1/7+ 1/8+ 1/9+⋯
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0;
    cout <<"Enter an integer n upto which the sum is desired: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += ((float)1 / (float)i);
    }
    cout << "Sum of the series upto n terms: " << sum << endl;
    return 0;
}
