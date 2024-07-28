// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     int ID;
//     int age;
//     string name;
// };

// int main()
// {
//     struct student a;
//     a.name = "Khushal";
//     a.ID = 88044;
//     a.age = 19;

//     struct student b;
//     b.name = "Nikhil";
//     b.ID = 88045;
//     b.age = 20;

//     struct student c;
//     c.name = "Akshit";
//     c.ID = 88046;
//     c.age = 20;

//     cout << a.name << endl;
//     return 0;
// }

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