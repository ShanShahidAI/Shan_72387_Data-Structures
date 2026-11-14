#include <iostream>
using namespace std;
int main() {
    int arr[5] = {15, 24, 39, 42, 58};
    int target;//Shan_72387_BSAI
    bool found = false;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }//Shan_72387_BSAI
    cout << endl;
    cout << "Enter number to search: ";
    cin >> target;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Number " << target << " found at index: " << i << endl;
            found = true;
            break; 
        }
    }//Shan_72387_BSAI
    if (!found) {
        cout << "Number " << target << " array me nahi mila." << endl;
    }

    return 0;
}
//Shan_72387_BSAI