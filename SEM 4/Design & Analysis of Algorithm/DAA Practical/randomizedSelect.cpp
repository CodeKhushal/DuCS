#include <iostream>
#include <time.h>
using namespace std;
void displayArray(int *&array, int size)
{
    cout << "Displaying Your Array..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl
         << endl;
}

void swap(int *&array, int a, int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition(int *&array, int start, int end)
{
    int index = start - 1;
    int pivot = end;
    while (start < end)
    {
        if (array[start] <= array[pivot])
        {
            index += 1;
            swap(array, index, start);
        }
        start += 1;
    }
    index += 1;
    swap(array, index, pivot);
    return index;
}

int partitionrandom(int *&array, int start, int end)
{
    srand(time(NULL));
    int randompivot = start + rand() % (start - end);
    swap(array, randompivot, end);
    return partition(array, start, end);
}

int kthSmallestElement(int *&array, int start, int end, int k)
{
    if (start == end)
    {
        return array[start];
    }
    int pos = partition(array, start, end);
    int index = pos - start + 1;
    if (index == k)
    {
        return array[pos];
    }
    else if (k < index)
    {
        return kthSmallestElement(array, start, pos - 1, k);
    }
    else
    {
        return kthSmallestElement(array, pos + 1, end, k - index);
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n] = {};
    int a;
    for(int i=0; i<n;i++){
        cout<<"Enter element no. "<<i+1<<":  ";
        cin>>a;
        cout<<endl;
        arr[i]=a;
    }

    int *array = arr;
    int k;
    cout<<"Enter the kth index to find kth smallest element: ";
    cin>>k;
    displayArray(array, n);
    int res = kthSmallestElement(array, 0, n, k);
    cout <<"Kth smallest element is: "<< res << endl;

    return 0;
}