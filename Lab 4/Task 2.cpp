#include <iostream>
using namespace std;
struct Node {
    int data;//Shan-72387-BSAI-DS-LAB-Task
    Node* next;
};//Shan-72387-BSAI-DS-LAB-Task
int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->data = 10;//Shan-72387-BSAI-DS-LAB-Task
    head->next = second;
    second->data = 20;//Shan-72387-BSAI-DS-LAB-Task
    second->next = third;
    third->data = 30;//Shan-72387-BSAI-DS-LAB-Task
    third->next = NULL;
    cout <<"Datas:" << head ->data << " "<< second->data << " " << third->data << endl;
    cout <<"Addresses:" << head->next << " " << second->next << " " << third->next << endl;
    cout << "Linked List Through Loop: ";
    Node* current = head;//Shan-72387-BSAI-DS-LAB-Task
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }//Shan-72387-BSAI-DS-LAB-Task
    return 0;
}