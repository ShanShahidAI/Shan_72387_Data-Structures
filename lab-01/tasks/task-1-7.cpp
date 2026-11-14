
#include <iostream>
using namespace std;
int main() {
    int arr[5];//Shan_72387_BSAI
    cout << "Enter the element ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
//Shan_72387_BSAI
    int min = arr[0];
    int max = arr[0];
//Shan_72387_BSAI
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
//Shan_72387_BSAI
    cout << "Minimum value is " << min << endl;
    cout << "Maximum value is " << max << endl;

    return 0;
}