#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
//Shan_72387_DS_LAB
int main()
{
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
//Shan_72387_DS_LAB
    first->data = 10;
    second->data = 80;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = first;
//Shan_72387_DS_LAB
    cout << first->data << " ";
    cout << first->next->data << " ";
    cout << second->next->next->data;
//Shan_72387_DS_LAB
    return 0;
}