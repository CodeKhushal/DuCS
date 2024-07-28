#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            cnt++;
        }
    }
    swap(arr[i + 1], arr[high]);
    cnt++;
    return (i + 1);
}

int partitionRandom(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    cnt++;
    return Partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partitionRandom(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int size;
    ofstream fout("data.txt");
    fout << "Size" << "," << "Comparisons" << endl;
    size = 30;
    for (int i = 0; i < 100; i++)
    {
        int Array[size] = {0};
        for (int j = 0; j < size; j++)
        {
            Array[j] = rand() % 10000;
        }
        
        quickSort(Array, 0, size - 1);
        fout << size << "," << cnt << endl;
        cnt = 0;
        if (i < 20)
            size += 9;
        else
            size += 10;
    }
    return 0;
}
