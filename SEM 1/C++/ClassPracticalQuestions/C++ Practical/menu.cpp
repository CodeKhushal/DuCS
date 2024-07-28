/** 
 * Write a menu driven program to perform following actions on 
 * an array entered by the user: 
 * (a) Print the even-valued elements. 
 * (b) Print the odd-valued elements. 
 * (c) Calculate and print the sum and average of the elements of the array. 
 * (d) Print the maximum and minimum elements of the array. 
 * (e) Remove the duplicates from the array. 
 * (f) Print the array in reverse order. 
 * The program should present a menu to the user and ask for one of the options. 
 * The menu should also include options to re-enter and to quit the program. 
 * Written by: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
 
int main()
{
    int choice, size;
    int array[30] = {0};
    cout << "Enter Size of the Array: ";
    cin >> size;
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    do
    {
        int min = array[0];
        int max = array[0];
        cout << "MENU---->" << endl;
        cout << " (1) Print the even-valued elements\n"
             << " (2) Print the odd-valued elements\n"
             << " (3) Calculate & Print Sum and Avg of elements\n"
             << " (4) Print maximum and minimum elements of array\n"
             << " (5) Print the array in reverse order\n"
             << " (6) Remove duplicates from the array\n "
             << " (7) Re-enter the array\n"
             << " (0) Exit the program\n";
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEven elements are: { ";
            for (int j = 0; j < size; j++)
            {
                if ((array[j] % 2) == 0)
                {
                    cout << array[j] << ' ';
                }
            }
            cout << "}" << endl
                 << endl;
            break;
        }
        case 2:
        {
            cout << "\nOdd elements are: { ";
            for (int j = 0; j < size; j++)
            {
                if ((array[j] % 2) != 0)
                {
                    cout << array[j] << ' ';
                }
            }
            cout << "}" << endl
                 << endl;
            break;
        }
        case 3:
        {
            int sum = 0, avg = 0;
            for (int i = 0; i < size; i++)
            {
                sum += array[i];
            }
            cout << "\nSum of elements: ";
            cout << sum;
            avg = (float)sum / size;
            cout << "\nAverage of elements: ";
            cout << avg << endl
                 << endl;
            break;
        }
        case 4:
        {
 
            for (int i = 0; i < size; i++)
            {
                if (array[i] > max)
                    max = array[i];
                if (array[i] < min)
                    min = array[i];
            }
            cout << "\nMinimum= " << min;
            cout << "\nMaximum= " << max << endl
                 << endl;
            break;
        }
        case 5:
        {
            int i;
            cout << "\nReversed Array: [ ";
            for (int i = size - 1; i >= 0; i--)
                cout << array[i] << ' ';
            cout << "]\n\n";
            break;
        }
        case 6:
        {
            int i, j, k;
            int count = 0;
            for (i = 0; i < size; ++i)
                for (j = i + 1; j < size;)
                {
                    if (array[i] == array[j])
                    {
                        count++;
                        for (k = j; k < size - 1; ++k)
                            array[k] = array[k + 1];
 
                        --size;
                    }
                    else
                        ++j;
                }
            cout << "\nDuplicates Found: " << count;
            cout << "\nRemoved all duplicates ...";
            cout << "\nNew Array: [";
            for (int i = 0; i < size; i++)
                cout << array[i] << ' ';
            cout << "]\n\n";
            break;
        }
        case 7:
        {
            cout << endl;
            cout << "Enter Size of the Array: ";
            cin >> size;
            cout << "Enter elements of the array: ";
            for (int i = 0; i < size; i++)
            {
                cin >> array[i];
            }
        }
        case 0:
            break;
        default:
        {
            cout << "\nInvalid Option ";
            break;
        }
        }
    } while (choice != 0);
 
    return 0;
}

