/*
    10. Write a Program that generates all the permutations of a given set of digits, with or without
    repetition. (For example, if the given set is {1,2}, the permutations are 12 and 21).
*/
#include <bits/stdc++.h>
using namespace std;

// Function to display the array
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to find the permutations
void findPermutations(int a[], int n)
{

    // Sort the given array
    sort(a, a + n);

    // Find all possible permutations
    cout << "Possible permutations are:\n";
    do
    {
        display(a, n);
    } while (next_permutation(a, a + n));
}

// Driver code
int main()
{
    int size;
    cout << "Enter size of element: ";
    cin >> size;
    int a[size];
    cout << "Enter elements in array:";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int n = sizeof(a) / sizeof(a[0]);

    findPermutations(a, n);

    return 0;
}
