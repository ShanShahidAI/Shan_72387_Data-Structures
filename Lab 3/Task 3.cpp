#include <iostream>
using namespace std;
//Shan_72387_BSAI
class List {
private:
    int arr[10];
    int size;
//Shan_72387_BSAI
public:
    List() {
        size = 0;
    } 
//Shan_72387_BSAI
    void input() {
        cout << "Enter size: ";
        cin >> size;//Shan_72387_BSAI
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];//Shan_72387_BSAI
        }
    }

    void remove() {
        int value;//Shan_72387_BSAI
        cout << "Enter number to delete: ";
        cin >> value;

        int position = -1;//Shan_72387_BSAI

        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                position = i;//Shan_72387_BSAI
                break;
            }
        }

        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];//Shan_72387_BSAI
        }
        size--;
    }
//Shan_72387_BSAI
    void display() {
        cout << "List: ";//Shan_72387_BSAI
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }//Shan_72387_BSAI
        cout << endl;
    }

    int Length() {
        return size;
    }
};//Shan_72387_BSAI

int main() {
    List list;
    list.input();
    list.display();
    list.remove();//Shan_72387_BSAI
    list.display();
    cout << "Length of list is: " << list.Length() << endl;
//Shan_72387_BSAI
    return 0;
}