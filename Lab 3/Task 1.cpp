#include <iostream>
using namespace std;
//Shan_72387_BSAI
class List {
private:
    int arr[10];
    int size;//Shan_72387_BSAI
    int n;
public:
    List() {
        size = 0;//Shan_72387_BSAI
    } 
    void input( ) {
        cout << "Enter size: ";
        cin >> n;
        size = n;//Shan_72387_BSAI
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];//Shan_72387_BSAI
        }
    }

  //Shan_72387_BSAI
    void display() {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";//Shan_72387_BSAI
        }
        cout << endl;//Shan_72387_BSAI
    }

    int Length() {
        return size;
    }
};//Shan_72387_BSAI

int main() {
    List list;
    list.input();
    list.display();//Shan_72387_BSAI

    cout << "Length of list is: " << list.Length() << endl;

    return 0;//Shan_72387_BSAI
}