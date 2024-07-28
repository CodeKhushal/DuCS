/*
   1. Write a Program to represent Graphs using the
   Adjacency Matrices and check if it is a complete graph.
*/

#include <iostream>
using namespace std;

int main()
{
    int vertices, edges = 0, row = 1;
    bool a = 1;
    cout << "Enter number of vertices:  ";
    cin >> vertices;

    //Creating Matrice
    int mat[vertices][vertices] = {0};

    for (int i = 0; i < vertices; i++)
    {
        for (int j = i; j < vertices; j++)
        {
            if (i != j)
            {
                //Asking user if two vertices are connected
                cout << "Does " << i + 1 << " and " << j + 1 << " are connected?\nPress 1 for \"yes\" and 0 for \"no\":  ";
                cin >> a;
                if (a)
                {
                    mat[i][j] = mat[j][i] = 1;
                }
                else
                {
                    mat[i][j] = 0;
                }
                cout << endl;
            }
        }
    }

    //Printing adjacency matrice for given graph
    for (int i = 0; i < vertices; i++)
    {
        cout << "    (" << i + 1 << ")";
    }
    cout << endl;

    for (int i = 0; i < vertices; i++)
    {
        cout << endl
             << "(" << row << ") ";
        row++;
        for (int j = 0; j < vertices; j++)
        {
            cout << " " << mat[i][j] << "     ";
            edges += mat[i][j];
        }
        cout << endl;
    }
    edges /= 2; //Get total number of edges in the graph

    int completeEdge = (vertices * (vertices - 1)) / 2; //Number of edges in a complete graph

    cout << endl
         << "RESULT:  ";

    if (edges == completeEdge)
    {
        cout << "This is a complete graph" << endl;
    }
    else
    {
        cout << "This is not a complete graph" << endl;
    }
    cout << endl;
    return 0;
}
