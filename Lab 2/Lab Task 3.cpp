#include <iostream>
using namespace std;

int main() {
    int arr[7];
    int *p = arr;
    int search;
//Shan_72387_BSAI
    cout << "Enter 7 num: ";
    for (int i = 0; i < 7; i++) {
        cin >> *(p + i);//Shan_72387_BSAI
    }
//Shan_72387_BSAI
    cout << "Enter number to find index value: ";
    cin >> search;
    cout << arr[search] << endl;//Shan_72387_BSAI


    //for (int i = 0; i < 7; i++) {
        //if (*(p + i) == search) {
          //  cout << "Index is: " << i << endl;
          //  return 0; 
     //   }
    //}
    if (arr[search] != search) {
    cout << "Number  found" << endl;
}
    return 0;
}