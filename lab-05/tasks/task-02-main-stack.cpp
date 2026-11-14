#include <iostream>
using namespace std;
// Node Class
class Node
{
public:
    int data;
    Node* next;
//Shan_72387_DS_LAB
    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
//Shan_72387_DS_LAB
// Singly Linked List Class
class SingleLinkedList
{
private:
    Node* head;

public:
//Shan_72387_DS_LAB
    // Constructor
    SingleLinkedList()
    {
        head = NULL;
    }
//Shan_72387_DS_LAB
    // Insert at Beginning
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }
//Shan_72387_DS_LAB
    // Insert at End
    void insertAtEnd(int value)
    {
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }//Shan_72387_DS_LAB
    // Insert at Position
    void insertAtPosition(int value, int position)
    {
        if (position <= 1)
        {
            insertAtBeginning(value);
            return;
        }
//Shan_72387_DS_LAB
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
//Shan_72387_DS_LAB
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
//Shan_72387_DS_LAB
    // Delete from Beginning
    void deleteFromBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
//Shan_72387_DS_LAB
    // Delete from End
    void deleteFromEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
//Shan_72387_DS_LAB
        Node* temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
//Shan_72387_DS_LAB
    // Delete from Position
    void deleteFromPosition(int position)
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (position <= 1)
        {
            deleteFromBeginning();
            return;
        }
//Shan_72387_DS_LAB
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp->next != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }
//Shan_72387_DS_LAB
    // Search
    bool search(int value)
    {
        Node* temp = head;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
//Shan_72387_DS_LAB
    // Display
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";

            temp = temp->next;
        }
        cout << "NULL" << endl;
    }//Shan_72387_DS_LAB
    // Destructor
    ~SingleLinkedList()
    {
        Node* temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
//Shan_72387_DS_LAB
// Main Function
int main()
{
    SingleLinkedList list;
    // Insert
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    cout << "List: ";
    list.display();
//Shan_72387_DS_LAB
    // Insert at position
    list.insertAtPosition(25, 3);
    cout << "After inserting 25: ";
    list.display();
//Shan_72387_DS_LAB
    // Search
    cout << "Searching for 25: ";
    if (list.search(25))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    // Delete beginning
    list.deleteFromBeginning();
    cout << "After deleting beginning: ";
    list.display();
//Shan_72387_DS_LAB
    // Delete end
    list.deleteFromEnd();
    cout << "After deleting end: ";
    list.display();
    // Delete position
    list.deleteFromPosition(2);
//Shan_72387_DS_LAB
    cout << "After deleting position 2: ";
    list.display();
    return 0;
}