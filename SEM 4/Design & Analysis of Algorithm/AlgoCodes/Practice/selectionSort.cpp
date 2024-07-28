#include<iostream>
using namespace std;

void displayArray(int A[], int n)
{
    for(int i = 0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void selectionSort(int A[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int imin = i;
        for(int j = i+1; j<n; j++)
        {
            if(A[j]<A[imin])
                imin = j;
        }
        int temp = A[i];
        A[i] = A[imin];
        A[imin] = temp;
        cout<<endl;
        displayArray(A,n);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elemets to be sort: ";
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"\nEnter element number "<<i+1<<":  ";
        cin>>A[i]; 
    }
    cout<<"Your input array is..."<<endl;
    displayArray(A,n);

    cout<<"\n-----Iterations-----";
    selectionSort(A,n);
    cout<<"\nYour array after sorting..."<<endl;
    displayArray(A,n);
}