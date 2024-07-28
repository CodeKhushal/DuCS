/*
This Program shows the sum of series
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the integral value upto which the sum is desired: ";
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 0)
            sum -= n;
        else
            sum += n;
        n--;
    }
    cout << "\nThe sum of the series is " << sum;
	return 0;
}
