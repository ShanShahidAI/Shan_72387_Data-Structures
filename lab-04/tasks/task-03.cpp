#include <iostream>
using namespace std;
struct Node {
    int data;//Shan-72387-BSAI-DS-LAB-Task
    Node* next;
};//Shan-72387-BSAI-DS-LAB-Task
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList() {
            head = NULL;//Shan-72387-BSAI-DS-LAB-Task
        }
//Shan-72387-BSAI-DS-LAB-Task
        void display() {
            Node* current = head;//Shan-72387-BSAI-DS-LAB-Task
            while(current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }//Shan-72387-BSAI-DS-LAB-Task
            cout << endl;
        }
         
};//Shan-72387-BSAI-DS-LAB-Task
int main(){
            LinkedList list;
        //Shan-72387-BSAI-DS-LAB-Task
        return 0;}