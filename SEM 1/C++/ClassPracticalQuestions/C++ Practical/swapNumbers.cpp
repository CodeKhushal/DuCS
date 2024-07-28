/*
QUESTION-11: Write a program that swaps two numbers using pointers.
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
 
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int x, y;
    cout << "Enter two Integers: ";
    cin >> x >> y;
    cout << "Integers before swapping: " << endl
         << "\tx: " << x << endl
         << "\ty: " << y << endl;
    swapPointer(&x, &y);
    cout << "Integers after swapping: " << endl
         << "\tx: " << x << endl
         << "\ty: " << y << endl;
    return 0;
}
