// 7. Write a Program to implement binary search using recursion.
#include <iostream>
using namespace std;

void binary_search(int list[], int lo, int hi, int key)
{
    int mid;
    if (lo > hi)
    {
        cout<<"Key not found"<<endl;
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        cout<<"Key found"<<endl;
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}

void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
 
int main()
{
    int key, size, i;
    int list[25];
 
    cout<<"Enter size of a list: ";
    cin>>size;
    cout<<"Enter elements"<<endl;
    for(i = 0; i < size; i++)
    {
        cin>>list[i];
    }
    bubble_sort(list, size);
    cout<<endl;
    cout<<"Enter key to search: ";
    cin>>key;
    binary_search(list, 0, size, key);
}
