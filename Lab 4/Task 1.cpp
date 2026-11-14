#include <iostream>
using namespace std;
struct Node {
    int data;//Shan-72387-BSAI-DS-LAB-Task
    Node* next;
};//Shan-72387-BSAI-DS-LAB-Task
int main(){
    Node* head = new Node;
    Node* second = new Node;
    head->data = 10;//Shan-72387-BSAI-DS-LAB-Task
    second->data = 20;
    head->next = second;
    second->next = NULL;//Shan-72387-BSAI-DS-LAB-Task
    cout << "Datas :"<<head->data << " " << second->data << endl;
    cout << "Addresses :"<<head->next <<" " << second->next << endl;
    return 0;//Shan-72387-BSAI-DS-LAB-Task
}