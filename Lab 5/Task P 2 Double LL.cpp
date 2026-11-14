#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};
//Shan_72387_DS_LAB
class DoublyLinkedList
{
private:
    Node* head;
//Shan_72387_DS_LAB
public:

    DoublyLinkedList()
    {
        head = NULL;
    }
//Shan_72387_DS_LAB
    void append(int value)
    {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else//Shan_72387_DS_LAB
        {
            Node* current = head;

            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = newNode;
            newNode->prev = current;
        }
    }
//Shan_72387_DS_LAB
    void display()
    {
        Node* current = head;

        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
};
//Shan_72387_DS_LAB
int main()
{
    DoublyLinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Doubly Linked List: ";

    list.display();

    return 0;
}