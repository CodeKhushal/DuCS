#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    static void display(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
    }
};

int main()
{
    node *head;
    node *second;
    node *third;

    /* Allocate memory for nodes 
    in the linked list in Heap*/
    head = new node;
    second = new node;
    third = new node;

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = NULL;

    node::display(head);

    node *newNode;
    newNode = new node;

    newNode->data = 25;
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl;
    node::display(head);

    return 0;
}