#include <bits/stdc++.h>
using namespace std;

class SET
{
    int size;
    char set[100];

public:
    SET(int s)
    {
        size = s;
        set[size];
    }

    void input()
    {
        cout << "Enter the elements of set:-   " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> set[i];
        }
    }

    bool isSubSet(SET set1)
    {
        bool table[set1.size] = {false};
        for (int i = 0; i < set1.size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (set1.set[i] == set[j])
                {
                    table[i] = true;
                    break;
                }
            }
        }

        for (int i = 0; i < set1.size; i++)
        {
            if (table[i] == false)
            {
                return false;
            }
        }

        return true;
    }
    void  union(SET Set1, SET Set2){
        SET Setf = Set1 + Set2;

    }
};

int main()
{
    int size;

    cout << "Enter size of first set:-   ";
    cin >> size;

    SET set1(size);
    set1.input();

    cout << "Enter size of second set:-   ";
    cin >> size;

    SET set2(size);
    set2.input();

    bool issubset = set1.isSubSet(set2);

    if (issubset)
    {
        cout << "Set 2 is subset of Set 1" << endl;
    }
    else
    {
        cout << "Set 2 is not a subset of Set 1" << endl;
    }
    return 0;
}