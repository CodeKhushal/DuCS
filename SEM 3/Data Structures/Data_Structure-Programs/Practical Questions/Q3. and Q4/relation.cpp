/*
    3. Create a class RELATION, use Matrix notation to represent a 
    relation. Include functions to check if a relation is reflexive, 
    Symmetric, Anti-symmetric and Transitive. Write a Program to use 
    this class.
    
    4. Use the functions defined in Ques 3 to find check whether the given relation is:
    a) Equivalent, or
    b) Partial Order relation, or
    c) None
*/

#include <bits/stdc++.h>
using namespace std;

class RELATION
{
    int relation[3][3];

public:
    RELATION()
    {
        input();
    }

    void input()
    {
        cout << "Enter the relation matrix:-" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> relation[i][j];
            }
        }

        display();
    }

    void display()
    {
        cout << "You entered:- " << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << relation[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool isReflexive()
    {
        int checkr = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (relation[i][j] == 1 && i == j)
                {
                    checkr++;
                }
            }
        }

        if (checkr == 3)
        {
            cout << "Given relation is reflexive" << endl;
            return true;
        }
        else
        {
            cout << "Given relation is not reflexive" << endl;
            return false;
        }
    }

    bool isSymmetric()
    {
        bool flag = true;
        bool isbreak = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (relation[i][j] == 1)
                {
                    if (relation[j][i] != 1)
                    {
                        flag = false;
                        isbreak = true;
                        break;
                    }
                    else if (relation[j][i] == 1)
                    {
                        flag = true;
                    }
                }
            }
            if (isbreak == true)
            {
                break;
            }
        }

        if (flag == true)
        {
            cout << "Given releation is Symmetric" << endl;
            return true;
        }
        else
        {
            cout << "Given relation is not Symmetric" << endl;
            return false;
        }
    }

    bool isAntiSymmetric()
    {
        bool flag = true;
        bool isbreak = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (relation[i][j] == 1 && relation[j][i] == 1 && i != j)
                {
                    flag = false;
                    isbreak = true;
                    break;
                }
                else if ((relation[i][j] == 1 && relation[j][i] != 1 && i != j) || (relation[i][j] == 1 && relation[j][i] == 1 && i == j))
                {
                    flag = true;
                }
            }
            if (isbreak == true)
            {
                break;
            }
        }

        if (flag == true)
        {
            cout << "Given releation is Anti-Symmetric" << endl;
            return true;
        }
        else
        {
            cout << "Given relation is not Anti-Symmetric" << endl;
            return false;
        }
    }

    // For Question 3
    void isTransitive3()
    {
        bool flag = true;
        bool isbreak = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (relation[i][j] == 1)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if (relation[j][k] == 1)
                        {
                            if (relation[i][k] != 1)
                            {
                                flag = false;
                                isbreak = true;
                            }
                            else if (relation[i][k] == 1)
                            {
                                flag = true;
                            }
                        }
                    }
                }
                if (isbreak == true)
                {
                    break;
                }
            }
            if (isbreak == true)
            {
                break;
            }
        }

        if (flag == true)
        {
            cout << "Given relation is Transitive" << endl;
        }
        else
        {
            cout << "Given relation is not Transitive" << endl;
        }
    }

    //For Question 4
    bool isTransitive4()
    {
        bool flag = true;
        bool isbreak = false;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (relation[i][j] == 1)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if (relation[j][k] == 1)
                        {
                            if (relation[i][k] != 1)
                            {
                                flag = false;
                                isbreak = true;
                            }
                            else if (relation[i][k] == 1)
                            {
                                flag = true;
                            }
                        }
                    }
                }
                if (isbreak == true)
                {
                    break;
                }
            }
            if (isbreak == true)
            {
                break;
            }
        }

        if (flag == true)
        {
            cout << "Given relation is Transitive" << endl;
            return true;
        }
        else
        {
            cout << "Given relation is not Transitive" << endl;
            return false;
        }
    }
};

int main()
{
    RELATION R1 = RELATION();
    //Question 3:
    cout << "Answer 3: " << endl;
    R1.isReflexive();
    R1.isSymmetric();
    R1.isAntiSymmetric();
    R1.isTransitive3();

    cout << endl
         << endl;

    //Question 4
    cout << "Answer 4: " << endl;
    bool ref = R1.isReflexive();
    bool sym = R1.isSymmetric();
    bool asym = R1.isAntiSymmetric();
    bool trans = R1.isTransitive4();

    if (ref == true && sym == true && trans == true)
    {
        cout << "Given relation is Equivalent" << endl;
    }
    else if (ref == true && asym == true && trans == true)
    {
        cout << "Given relation is Partial order" << endl;
    }
    else if ((ref == true && sym == true && trans == true) && (ref == true && asym == true && trans == true))
    {
        cout << "Given relation is both Equivalent and Partial order" << endl;
    }
    else
    {
        cout << "Given relation is neither Equivalent nor Partial Order" << endl;
    }

    return 0;
}
