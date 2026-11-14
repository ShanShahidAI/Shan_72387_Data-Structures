#include <iostream>
using namespace std;
int main()
{
    int stackArray[5];
    int top = -1;
    top++;//Shan_72387_DS_LAB
    stackArray[top] = 10;
    top++;
    stackArray[top] = 20;
    top++;//Shan_72387_DS_LAB
    stackArray[top] = 30;
    cout << "Top before Pop: "
         << stackArray[top] << endl;
    top--;//Shan_72387_DS_LAB
    cout << "Top after Pop: "
         << stackArray[top] << endl;
    return 0;
}