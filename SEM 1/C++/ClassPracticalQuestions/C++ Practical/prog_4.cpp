/*
   4. Given an adjacency matrix of a graph, write a program to check whether a given set of
   vertices {v1,v2,v3.....,vk} forms an Euler path / Euler Circuit (for circuit assume vk=v1).
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define vertices 5
using namespace std;
// //uncomment to check disconnected graph
//int graph[vertices][vertices] = {{0, 1, 1, 0, 0},
//                                 {1, 0, 1, 0, 0},
//                                 {1, 1, 0, 0, 0},
//                                 {0, 0, 0, 0, 1},
//                                 {0, 0, 0, 1, 0}};

// //uncomment to check eulerian path but not circuit
// int graph[vertices][vertices] = {{0, 1, 1, 1, 0},
//                                  {1, 0, 1, 0, 0},
//                                  {1, 1, 0, 0, 0},
//                                  {1, 0, 0, 0, 1},
//                                  {0, 0, 0, 1, 0}};

// Euler Circuit as well as path
 int graph[vertices][vertices] = {{0, 1, 1, 1, 1},
                                  {1, 0, 1, 0, 0},
                                  {1, 1, 0, 0, 0},
                                  {1, 0, 0, 0, 1},
                                  {1, 0, 0, 1, 0}};

// //Uncomment to check Non Eulerian Graph
// int graph[vertices][vertices] = {{0, 1, 1, 1, 0},
//                        {1, 0, 1, 1, 0},
//                        {1, 1, 0, 0, 0},
//                        {1, 1, 0, 0, 1},
//                        {0, 0, 0, 1, 0}};

bool isconnected()
{
    bool f = 0;
    vector<int> visiting;
    vector<int> visited;
    visiting.push_back(2);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (graph[visiting[0]][j] == 1 && !count(visiting.begin(), visiting.end(), j) && !count(visited.begin(), visited.end(), j))
            {
                visiting.push_back(j);
            }
        }

        if (!visiting.empty())
        {
            visited.push_back(visiting[0]);
            visiting.erase(visiting.begin());
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (!count(visited.begin(), visited.end(), i))
        {
            f = 1;
            break;
        }
    }
    return f;
}
int isEuler()
{
    int i, j, k;
    vector<int> degree(vertices, 0);
    int odddegree = 0;
    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            if (graph[i][j] == 1)
                degree[i]++;
        }
    }
    for (i = 0; i < vertices; i++)
    {
        if (degree[i] % 2 != 0)
            odddegree++;
    }
    return odddegree;
}
int main()
{
    cout<<"{0, 1, 1, 1, 1}\n{1, 0, 1, 0, 0}\n{1, 1, 0, 0, 0}\n{1, 0, 0, 0, 1}\n{1, 0, 0, 1, 0}"<<endl;
    if (isconnected())
    {
        cout << "Graph is disconnected.";
        return 0;
    }
    switch (isEuler())
    {
    case 0:
        cout << "The graph has Euler Path as well as circuit.";
        break;
    case 2:
        cout << "The graph has Euler Path but no circuit.";
        break;
    default:
        cout << "The graph has neither Euler Path nor a Euler circuit.";
        break;
    }
    return 0;
}
