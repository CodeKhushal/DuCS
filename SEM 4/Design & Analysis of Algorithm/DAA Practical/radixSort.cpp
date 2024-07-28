#include <iostream>
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
void countSort(int *&array, int size, int exp)
{
    int m = array[0];
    for (int i = 0; i < size; i++)
    {
        m = max(m, array[i]);
    }
    int count[m + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        count[(array[i] / exp) % 10] += 1;
    }
    for (int i = 1; i < (m + 1); i++)
    {
        count[i] += count[i - 1];
    }

    int output[size];
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10] -= 1;
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}
void radixSort(int *&array, int size)
{
    int m = array[0];
    for (int i = 0; i < size; i++)
    {
        m = max(m, array[i]);
    }
    int exp = 1;
    while ((m / exp) > 0)
    {
        countSort(array, size, exp);
        exp *= 10;
    }
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n] = {};
    int a;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << ":  ";
        cin >> a;
        cout << endl;
        arr[i] = a;
    }
    int *array = arr;

    displayArray(array, n);
    radixSort(array, n);
    cout << "After sorting!" << endl;
    displayArray(array, n);

    return 0;
}