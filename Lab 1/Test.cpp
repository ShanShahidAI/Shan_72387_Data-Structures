#include <iostream>
using namespace std;
int main() {
    char choice;
    int num1, num2, sum, average, product;
    cout << "S. Sum of num" << endl;
    cout << "A. Average of num" << endl;
    cout << "P. Product of num" << endl;
     cout << "Enter your choice: "<<endl;
    cin >> choice;//Shan_72387_BSAI
    switch (choice) {
    case 'S'://Shan_72387_BSAI
    {
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        sum=num1+num2;
        cout<<"Sum: "<<sum<<endl;
        break;
    }//Shan_72387_BSAI
    case 'A':{
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        average=(num1+num2)/2;
        cout<<"Average: "<<average<<endl;
        break;
        }//Shan_72387_BSAI
    case 'P':
    {
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        product=num1*num2;//Shan_72387_BSAI
        cout<<"Product: "<<product<<endl;
        break; 
        }
        //Shan_72387_BSAI
     default:
        {
        cout<<"Invalid choice!"<<endl;
    }
//Shan_72387_BSAI
 }
    return 0;
}