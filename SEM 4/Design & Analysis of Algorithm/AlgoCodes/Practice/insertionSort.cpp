#include<iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for(int i = 0; i<n; i++)
        cout<<A[i]<<" ";
}

void insertionSort(int A[], int n)
{
    int value;
    int hole;
    for(int i = 1; i<n; i++)
    {
        value = A[i];
        hole = i;
        while(hole>0 && A[hole - 1]>value)
        {
            A[hole] = A[hole - 1];
            hole--;
        }
        A[hole] = value;
        cout<<endl;
        displayArray(A,n);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want to input: ";
    cin>>n;
    int A[n];
    cout<<"\nEnter the elements of array.. "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter element number "<<i+1<<": ";
        cin>>A[i];
    }

    cout<<"Your input array is... \n";
    displayArray(A,n);
    cout<<"\n\nArray sorting....";
    cout<<"\nIterations: ";
    insertionSort(A,n);
    cout<<"\n\nArray after sorting....\n";
    displayArray(A,n);
}