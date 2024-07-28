#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *head;
    node *tail;

    node()
    {
        head = 0;
        tail = 0;
    }

    void addToHead(int inputData)
    {
        node *temp = new node;
        temp->data = inputData;
        temp->next = NULL;
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void display()
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        // cout << temp->data << endl;
    }
};

int main()
{
    node a;
    int x;
    cout << "Enter the value: ";
    cin >> x;
    int y;
    cout << "Enter the value: ";
    cin >> y;
    a.addToHead(x);
    a.addToHead(y);
    a.display();
    return 0;
}