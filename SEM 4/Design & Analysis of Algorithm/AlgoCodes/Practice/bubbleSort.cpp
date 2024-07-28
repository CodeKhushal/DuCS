#include<iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for(int i = 0; i<n; i++)
        cout<<A[i]<<" ";
}

void bubbleSort(int A[], int n)
{
    for(int k = 1; k<n; k++)
    {
        int flag = 0;
        for(int i = 0; i<n-k; i++)
        {
            if(A[i] > A[i+1])
            {
                swap(A[i], A[i+1]);
                flag = 1;
                cout<<endl;
                displayArray(A,n);
            }
        }
        if(flag == 0)
        {
            cout<<endl;
            displayArray(A,n);
            break;
        }
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
    bubbleSort(A,n);
    cout<<"\n\nArray after sorting....\n";
    displayArray(A,n);
}