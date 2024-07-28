/*
 *  Written By: Khushal Sachdeva
 *  Internal Assignment Practical
 */
#include <iostream>
using namespace std;
 
// Write a SimpleBox class declaration with one private data member: side.
class SimpleBox
{
    // Include a default constructor, a destructor, and accessor methods for side.
private:
    unsigned int side;
 
    /* 
     *  Write the implementation of the default constructor, initializing
     *  side with the value 5.
     */
public:
    SimpleBox()
    {
        side = 5;
    }
 
    /*
     *  Overload the constructor so that it takes a value as its parameter
     *  and assigns that value to side.
     */
    ~SimpleBox()
    {
    }
    SimpleBox(int s)
    {
        side = s;
    }
 
    
 
    /* 
     *  Create a prefix and postfix increment operator for your SimpleBox
     *  class that increments its side.
     */
    SimpleBox operator++();    //Preincrement
    SimpleBox operator++(int); //Postincrement
    SimpleBox operator=(SimpleBox s);
    friend SimpleBox operator+(SimpleBox s1, SimpleBox s2);
    friend ostream &operator<<(ostream &out, SimpleBox &s);
    friend istream &operator>>(istream &in, SimpleBox &s);
    friend bool operator!(SimpleBox s);
    int getside()
    {
        return side;
    }
};
SimpleBox SimpleBox::operator++() //Preincrement
{
    return SimpleBox(++side);
}
SimpleBox SimpleBox::operator++(int) //Postincrement
{
    return SimpleBox(side++);
}
 
//Provide an assignment operator for SimpleBox.
SimpleBox SimpleBox::operator=(SimpleBox s)
{
    side = s.side;
    return *this;
}
 
/*
 *  Provide an implementation of the binary operator + that takes two
 *  SimpleBox objects and creates a larger SimpleBox whose side is the sum
 *  of the sides of the two operands.
 */
SimpleBox operator+(SimpleBox s1, SimpleBox s2)
{
    SimpleBox temp;
    temp.side = s1.side + s2.side;
    return temp;
}
ostream &operator<<(ostream &out, SimpleBox &s)
{
    out << s.side;
    return out;
}
istream &operator>>(istream &in, SimpleBox &s)
{
    in >> s.side;
    return in;
}
 
/*  
 *  Write an implementation for the ! operator that returns true if the
 *  side of its operand is 0, false otherwise.
 */
bool operator!(SimpleBox s) //returns 1 if side is 0
{
    return (s.side == 0);
}
 
/*
 *   Write a main that creates two SimpleBox objects. Instantiate one with    
 *   the value 9. Take user input for the other with the >> operator. Use 
 *   the ! operator to determine if the second SimpleBox has side 0. If 
 *   yes, then prompt the user again for its side. Print the values of the 
 *   sides of the two SimpleBox objects using the << operator. Call the
 *   increment operator on each and again print their values. Create a 
 *   larger SimpleBox object by adding the two previous boxes using the +
 *   operator and print its value. Finally, assign the second object to
 *   the first and print their values.
 */
int main()
{
    SimpleBox obj1(9), obj2;
    do
    {
   cout << "Enter the value for 2nd object(side value should not be 0): ";
   cin >> obj2;
    } while (!obj2);
    cout << endl
         << "Side of 1st box : " << obj1;
    cout << endl
         << "Side of 2nd box : " << obj2;
    cout << endl
         << endl
         << "After Increment - ";
    ++obj1;
    ++obj2;
    cout << endl
         << "Side of 1st box : " << obj1;
    cout << endl
         << "Side of 2nd box : " << obj2;
    SimpleBox obj3;
    obj3 = obj1 + obj2;
    cout << endl
         << "Side of larger box : " << obj3;
    cout << endl
         << endl
         << "Assigning the 2nd obj to 1st ... ";
    obj1 = obj2;
    cout << endl
         << "Side of 1st object after assigning : " << obj1;
    cout << endl
         << "Side of 2nd object after assigning : " << obj2 << endl;
    return 0;
}
