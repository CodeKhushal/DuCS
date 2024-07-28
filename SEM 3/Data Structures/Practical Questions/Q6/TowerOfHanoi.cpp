// 6. Write a Program to implement Tower of Hanoi using recursion.
#include <iostream>
using namespace std;

void ToH(int ndisk, char source, char temp, char dest)
{
    if(ndisk>0)
    {
        ToH(ndisk-1,source,dest,temp);
        cout<<"Move Disk "<<ndisk<<"    "<<source<<"-->"<<dest<<endl;
        ToH(ndisk-1,temp,source,dest);
    }
}

int main()
{
    char source = 'S',temp = 'T',dest = 'D';
    int ndisk;
    cout<<"Enter the number of disks in Tower Of Hanoi: ";
    cin>>ndisk;
    cout<<"Sequence is: "<<endl;
    ToH(ndisk,source,dest,temp);
}
