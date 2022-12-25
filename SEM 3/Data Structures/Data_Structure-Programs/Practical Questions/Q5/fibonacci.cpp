// 5.Write a Program to generate the Fibonacci Series using recursion.
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int a,i=0;
    cout<<"Enter number of terms you want to print of fibonacci series: ";
    cin>>a;
    cout<<"Generating fibonacci series......."<<endl;
    for (int c = 1 ; c <= a ; c++ )
   {
      cout<<fibonacci(i);
      if(c!=a)
      cout<<", ";
      i++; 
   }
    cout<<endl;
   return 0;
}
