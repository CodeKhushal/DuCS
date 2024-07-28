/*
   17. Write a Program to accept a directed graph G and 
   compute the in-degree and out-degree of each vertex.
*/

#include <iostream>
using namespace std;

int main()
{
    int vertices, edges, vert1, vert2, row = 1, indeg, outdeg;
    indeg = outdeg = 0; // Initialized indegree and outdegree as 0
    cout << "Enter number of vertices:  ";
    cin >> vertices;

    int mat[vertices][vertices];
    int indegree[vertices] = {0};
    int outdegree[vertices] = {0};

    for (int i = 0; i < vertices; i++)
    {
        outdegree[i] = indegree[i] = 0;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            mat[i][j] = 0;
        }
    }

    cout << "Enter the number of edges:  ";
    cin >> edges;

    //Taking inputs
    for (int i = 0; i < edges; i++)
    {
        cout << "Edge " << i + 1 << " :  " << endl << endl;
        cout << "Emerging from:  ";
        cin >> vert1;
        cout << "Encountering:  ";
        cin >> vert2;
        mat[vert1 - 1][vert2 - 1] = 1;
        indegree[vert2 - 1]++;
        outdegree[vert1 - 1]++;
        cout << endl;
    }

    //Calculating total in-degree and total out-degree
    for (int i = 0; i < vertices; i++)
    {
        indeg += indegree[i];
        outdeg += outdegree[i];
    }

    //Printing adjacency matrice for given graph
    cout << "Directed Graph G:" << endl;
    for (int i = 0; i < vertices; i++)
    {
        cout << "    (" << i + 1 << ")";
    }
    cout << endl;

    for (int i = 0; i < vertices; i++)
    {
        cout << endl << "(" << row << ") ";
        row++;
        for (int j = 0; j < vertices; j++)
        {
            cout << " " << mat[i][j] << "     ";
            edges += mat[i][j];
        }
        cout << endl;
    }

    //Printing in-degrees & out-degree
    cout << endl << "Vertices\tin-deg\tout-deg" << endl;
    for (int i = 0; i < vertices; i++)
    {
        cout << "  (" << i + 1 << ")  \t" << "           " << indegree[i] << '\t' << "   " << outdegree[i] << endl;
    }
    cout << endl;

    //Printing about degree of graph
    cout << "Total in-degree = " << indeg << endl;
    cout << "Total out-degree = " << outdeg << endl;
    cout << "Total degree = " << (indeg + outdeg) << endl;
    return 0;
}
