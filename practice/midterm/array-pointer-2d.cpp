
#include <iostream>
using namespace std;

void display(int (*p)[3])
{
    cout << "1D Output: ";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << p[i][j] << " ";
        }
    }
}

int main()
{
    int arr[2][3];
    int (*p)[3] = arr;

    cout << "Enter 2D array 6 elements: ";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> p[i][j];
        }
    }

    display(p);

    return 0;
}
