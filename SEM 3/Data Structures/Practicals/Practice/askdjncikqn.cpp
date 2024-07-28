#include <iostream>
using namespace std;

struct student
{
    int ID;
    int age;
    string name;
    student(int ID, int age, string name)
    {
        this->ID = ID;
        this->age = age;
        this->name = name;
    }
};

int main()
{
    struct student a(88044, 19, "Khushal");
    cout << a.name << endl;
    return 0;
}