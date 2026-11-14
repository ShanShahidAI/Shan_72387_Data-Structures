#include <iostream>
using namespace std;
int main() {
    int size = 25;
int *arr1 = new int[size];//Shan_72387_BSAI
int *arr2 = new int[size];
for(int i = 0; i < size; i++) {
    arr1[i] = i + 1;//Shan_72387_BSAI
    arr2[i] = (i + 1) * 10;}
    cout<<"Before swapping: " << endl;
    cout<<"array 1 is: " << endl;//Shan_72387_BSAI
    for(int i = 0; i < size; i++) {
    cout <<arr1[i]<<" ";
    }
    cout<<endl;//Shan_72387_BSAI
    cout<<"array 2 is: " << endl;
    for(int i = 0; i < size; i++) {
    cout <<arr2[i]<<" ";
    }
    cout<<endl;//Shan_72387_BSAI
int *temp = arr1;
arr1 = arr2;
arr2 = temp;//Shan_72387_BSAI
cout<<"After swapping: " << endl;
    cout<<"array 1 is: " << endl;
    for(int i = 0; i < size; i++) {
    cout <<arr1[i]<<" ";//Shan_72387_BSAI
    }
    cout<<endl;
    cout<<"array 2 is: " << endl;
    for(int i = 0; i < size; i++) {
    cout <<arr2[i]<<" ";//Shan_72387_BSAI
    }
delete[] arr1;
delete[] arr2;//Shan_72387_BSAI
return 0;
}
