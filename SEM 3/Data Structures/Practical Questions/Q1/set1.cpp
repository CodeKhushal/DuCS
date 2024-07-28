#include <iostream>
#include <math.h>
using namespace std;

int cardinality(char *set, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (set[i] == set[j])
            {
                for (int k = j; k < size; k++)
                {
                    set[k] = set[k + 1];
                }
                size--;
            }
        }
    }
    return size;
}

bool ismember(char *arr, int size, int element)
{
    bool a = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            a = true;
        }
    }
    return a;
}

void powerset(char *set, int size)
{
    /* set_size of power set of a set with set_size
           n is (2^n -1)
        */
    int powSetSize = pow(2, size);
    cout << "{ ";
    cout << "{} ";
    for (int i = 0; i < powSetSize; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i & (1 << j))
                cout << set[j];
        }
        if (i != powSetSize - 1)
        {
            cout << ", ";
        }
    }
    cout << " }";
}

int main()
{
    int size;
    int element;
    cout << "Enter the size of set: ";
    cin >> size;
    char set[size] = {};
    cout << "Enter Set Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> set[i];
    }
    cout << "Enter the element you want to search for: ";
    cin >> element;

    if (ismember(set, size, element) == true)
    {
        cout << "Element Found!" << endl;
    }
    else
        cout << "Element not Found!" << endl;

    cout << "Cardinality of given set is " << cardinality(set, size) << endl;

    cout << endl
         << "Power Set of the entered set is: " << endl;
    powerset(set, size);
    return 0;
}
