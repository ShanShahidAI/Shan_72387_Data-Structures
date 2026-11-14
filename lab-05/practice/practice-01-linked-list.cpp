#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};//Shan_72387_DS_LAB

int main()
{
    Node* first = new Node;
    Node* second = new Node;
//Shan_72387_DS_LAB
    first->data = 10;
    second->data = 20;

    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = NULL;
//Shan_72387_DS_LAB
    cout << first->data << " ";
    cout << first->next->data;
//Shan_72387_DS_LAB
    return 0;
}