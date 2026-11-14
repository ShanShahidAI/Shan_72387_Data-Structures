#include <iostream>
using namespace std;
// 1. Bubble Sort Function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// 2. Selection Sort Function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}
// 3. Binary Search Function
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (key > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
// Array Display Function
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[100];
    cout << n << " plz elements enter :"<<endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    int choice;
    cout << "--- Select Operation ---"<<endl;
    cout << "1. Bubble Sort"<<endl;
    cout << "2. Selection Sort"<<endl;
    cout << "3. Binary Search (First sort it )"<<endl;
    cout << "Choice enter plz: "<<endl;
    cin >> choice;

    if (choice == 1) {
        bubbleSort(arr, n);
        cout << "Sorted by Bubble Sort: ";
        display(arr, n);
    } 
    else if (choice == 2) {
        selectionSort(arr, n);
        cout << "Sorted by Selection Sort: ";
        display(arr, n);
    } 
    else if (choice == 3) {
        bubbleSort(arr, n); 
        cout << "Sorted Array: ";
        display(arr, n);

        int key;
        cout << "For Searching Enter Number: ";
        cin >> key;

        int index = binarySearch(arr, n, key);
        if (index != -1)
            cout << "Number index " << index << " Found IT"<<endl;
        else
            cout << "Number array not Found."<<endl;
    }

    return 0;
}