
#include <iostream>
using namespace std;

void arrayFunction(int *ptr, int n)
{
    cout << "Enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    cout << "Array elements are: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size!";
        return 0;
    }

    arrayFunction(arr, n);

    return 0;
}
