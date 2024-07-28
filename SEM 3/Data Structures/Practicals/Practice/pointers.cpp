#include <iostream>
using namespace std;
int main()
{
    int b = 1234;
    int *a = &b;
    cout << a << endl;
    cout << &b << endl;
    cout << &a << endl;
    cout << *a << endl;
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << "Array[" << i << "] value i.e. " << arr[i]
             << " stored at: " << (p + i * sizeof(a)) << endl;
    }
    return 0;
}