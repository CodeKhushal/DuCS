/*
QUESTION-8: Write a program to print the triangle of stars as follows
            (take number of lines from user):
                                    * 
                                   *** 
                                  *****
                                 *******
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
  cout << endl;
  for (int i = 1; i <= n; i++) //loop for each line
  {
    for (int j = 1; j <= n - i; j++) //number of spaces = n-i
    {
      cout << ' ';
    }
    for (int k = 1; k <= 2 * i - 1; k++) //number of stars = 2i-1(odd nos.)
        {
            cout << "*";
     }
        cout << endl;
    }
    return 0;
}
