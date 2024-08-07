#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void heapify(int arr[], int n, int i)
{
        cnt++;
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left<n&&arr[left] >arr[largest])
                largest = left;

        if (right<n&&arr[right] >arr[largest])
                largest = right;

        if (largest != i)
        {
                swap(arr[i], arr[largest]);
                heapify(arr, n, largest);
        }
}

void heapsort(int arr[], int n)
{
        // Building max-heap
        for (int i = n / 2 - 1; i>= 0; i--)
                heapify(arr, n, i);

        // heap sort
        for (int i = n - 1; i>= 0; i--)
        {
                swap(arr[0], arr[i]);

                // heapify root element
                heapify(arr, i, 0);
        }
}

int main()
{
        int size;
        ofstream fout("data.txt");
        fout<<"Size"
             <<","
             <<"Comparisons"<<endl;
        srand(time(0));
        for (int i = 0; i<100; i++)
        {
                size = rand() % 971 + 30;
                int Array[size] = {0};
                for (int j = 0; j<size; j++)
                {
                        Array[j] = rand() % 10000;
                }

                heapsort(Array, size);
                fout<<size<<","<<cnt<<endl;
                cnt = 0;
        }
        return 0;
}
