#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;
    int value;//Shan_72387_DS_LAB
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value: ";
        cin >> value;
//Shan_72387_DS_LAB
        top++;
        stack[top] = value;
    }
    cout << "\nStack:\n";

    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
//Shan_72387_DS_LAB
    return 0;
}