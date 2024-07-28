/*
QUESTION-5: Write a function that checks whether a given string is a Palindrome or not and use it to check whether the string entered by the user is a Palindrome.
Written By: Khushal Sachdeva
*/
#include <iostream>
using namespace std;
 
void checkPalindrome(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;
    for (int j = 0, k = i; j <= i / 2; j++, k--)
    {
        if (s[j] != s[k])
        {
            cout << "String ( " << s << " ) is not a palindrome."<<endl;
            return;
        }
    }
    cout << "String ( " << s << " ) is a palindrome."<<endl;
    return;
}
int main()
{
    char str[255];
    cout << "Enter a string: ";
    cin >> str;
    checkPalindrome(str);
    return 0;
}
