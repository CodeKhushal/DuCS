/*
   5. Given a full m-ary tree with i internal vertices, 
   Write a Program to find the number of leaf nodes.
*/

#include <iostream>
using namespace std;

int calLeafNodes(int m, int i)
{
    int a;
    a = ((m * i) + 1) - i;
    return a;
}

int main()
{
    int m, i;
    cout << "For full m-ary tree, Please enter:" << endl;
    cout << "Value of m:  ";
    cin >> m;
    cout << "Enter total number of Internal Vertices:  ";
    cin >> i;

    cout << endl << endl
         << "Total number of leaf nodes in given " << m << "-ary tree is " << calLeafNodes(m, i) << endl;

    return 0;
}
