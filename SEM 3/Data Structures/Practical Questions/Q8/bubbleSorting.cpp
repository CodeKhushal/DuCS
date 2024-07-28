/*
    Q8. Write a Program to implement Bubble Sort. Find the number of comparisons during each
    pass and display the intermediate result. Use the observed values to plot a graph to analyse
    the complexity of algorithm.
*/
#include <iostream>
using namespace std;

void displayArray(int *&array, int *&size)
{
    cout << "Displaying Your Array...." << endl;
    cout << "[ ";
    for (int i = 0; i < *size; i++)
    {
        cout << array[i];
        if (i != *size - 1)
        {
            cout << " ,";
        }
    }
    cout << " ]";
    cout << endl << endl;
}
void swap(int *&a, int *&b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *&array, int *&size)
{
    bool swapped;

    for (int i = 0; i < *size; i++)
    {
        swapped = false;
        int *comparisons = new int(0);
        for (int j = 0; j < *size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                *comparisons += 1;
                swapped = true;
            }
        }
        cout << "ITERATION : " << i + 1 << endl;
        cout << "Comparisons : " << *comparisons << endl;
        displayArray(array, size);
        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
        {
            cout << endl;
            cout << "Sorted Array: ";
            displayArray(array, size);
            break;
        }
        displayArray(array, size);
    }
}
int main()
{
    int arr[] = {7, 38, 3, 60, 76, 8, 3, 10, 70, 8, 19, 31};
    int *array = arr;
    int *length = new int(12);
    displayArray(array, length);
    bubbleSort(array, length);

    delete[] array;
    delete length;

    return 0;
}
