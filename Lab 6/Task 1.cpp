#include <iostream>
#include <string>
using namespace std;
//Shan_72387_DSA_LAB_6
bool isPalindrome(string str)
{
    char stack[100];
    int top = -1;
//Shan_72387_DSA_LAB_6
    for (int i = 0; i < str.length(); i++)
    {
        top++;
        stack[top] = str[i];
    }
//Shan_72387_DSA_LAB_6
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != stack[top])
        {
            return false;
        }
//Shan_72387_DSA_LAB_6
        top--;
    }
    return true;
}
//Shan_72387_DSA_LAB_6
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
//Shan_72387_DSA_LAB_6
    if (isPalindrome(str))
        cout << "Result is valid" << endl;
    else
        cout << "Result is invalid" << endl;
//Shan_72387_DSA_LAB_6
    return 0;
}