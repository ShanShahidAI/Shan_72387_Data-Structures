
#include <iostream>
using namespace std;

void sum(int *p1, int *p2, int n)
{
    cout << "Sum: ";

    for(int i = 0; i < n; i++)
    {
        cout << *(p1+i) + *(p2+i) << " ";
    }
}

int main()
{
    int a[10], b[10], n;

    cout << "Enter array size: ";
    cin >> n;

    if(n < 1 || n > 10)
    {
        cout << "Invalid size";
        return 0;
    }

    int *p1 = a;
    int *p2 = b;

    cout << "Enter first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> *(p1+i);
    }

    cout << "Enter second array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> *(p2+i);
    }

    sum(p1, p2, n);

    return 0;
}
