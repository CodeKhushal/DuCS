#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int arr[MAX];
int n; // n is total number of elemets in array

void input()
{
    for (int i = 0; i < n; i++)
    {
        printf("Input value for elent %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int search(int item)
{
    for (int i = 0; i < n; i++)
    {
        if (item == arr[i])
            return (i + 1);
    }
    return 0;
}

void insert()
{
    int temp, item, position;
    if (n == MAX)
    {
        printf("List overflow!");
        return;
    }
    printf("Enter position for insertion: ");
    scanf("%d", &position);
    printf("Enter the value: ");
    scanf("%d", &item);
    if (position > n + 1)
    {
        printf("ENter position less than or equal to %d\n", n + 1);
        return;
    }
    // Insertion at the end
    if (position == n + 1)
    {
        arr[n] = item;
        n = n + 1;
        return;
    }

    //Insertion in between
    while (temp >= position - 1)
    {
        arr[temp + 1] = arr[temp];
        temp--;
    }
    arr[position - 1] = item;
    n = n + 1;
}

void del()
{
    int temp, position, item;
    if (n == 0)
    {
        printf("List Underflow!");
        return;
    }
    printf("Enter the element to be deleted: ");
    scanf("%d", &item);
    if (item == arr[n - 1])
    {
        n = n - 1;
        return;
    }
    position = search(item);
    if (position == 0)
    {
        printf("Element not present in array!");
        return;
    }
    temp = position - 1;
    while (temp <= n - 1)
    {
        arr[temp] = arr[temp + 1];
        temp++;
    }
    n = n - 1;
}

void display()
{
    if (n == 0)
    {
        printf("List is empty!");
        return;
    }
    printf("[ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");
}

int main()
{
    int choice, item, pos;
    while (1)
    {
        printf("1. Input List\n");
        printf("2. Insert\n");
        printf("3. Search\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of elements to be entered: ");
            scanf("%d", &n);
            input(n);
            break;

        case 2:
            insert();
            break;

        case 3:
            printf("ENter the element to be searched: ");
            scanf("%d", &item);
            pos = search(item);
            if (pos >= 1)
                printf("%d found at position %d", item, pos);
            else
                printf("Element not found!");
            break;

        case 4:
            del();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(1);
            break;

        default:
            printf("Wrong choice!");
        }
    }
    return 0;
}
