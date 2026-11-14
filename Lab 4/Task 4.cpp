#include <iostream>
using namespace std;
struct Node {
    int data;//Shan-72387-BSAI-DS-LAB-Task
    Node* next;
};//Shan-72387-BSAI-DS-LAB-Task
int main() {
    Node* head = NULL;
    Node* current = NULL;
    int n;//Shan-72387-BSAI-DS-LAB-Task
    cout <<"How many nodes do you want to create? "<<endl;
    cin >> n;
    for (int i=1;i<=n; i++) {
        Node* newNode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data;//Shan-72387-BSAI-DS-LAB-Task
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            current = head;//Shan-72387-BSAI-DS-LAB-Task
        } else {
            current->next = newNode;
            current = newNode;
        }//Shan-72387-BSAI-DS-LAB-Task

    }//Shan-72387-BSAI-DS-LAB-Task
    cout << "The linked list is: "<<endl;
    current = head;
    while(current != NULL) {
        cout <<"Datas:" << current->data << " "<<endl;;
        cout << "Address:" << current->next << " "<<endl;
        current = current->next;//Shan-72387-BSAI-DS-LAB-Task
    }
    return 0;
}