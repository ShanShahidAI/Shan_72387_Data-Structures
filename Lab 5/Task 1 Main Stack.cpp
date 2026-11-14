#include <iostream>
using namespace std;

// Node class
class Node
{
public:
    int data;//Shan_72387_DS_LAB
    Node* next;
//Shan_72387_DS_LAB
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};//Shan_72387_DS_LAB

// Stack class
class Stack
{
private:
    Node* head;
    int count;
//Shan_72387_DS_LAB
public:

    //  Constructor
    Stack()
    {
        head = NULL;
        count = 0;
    }
//Shan_72387_DS_LAB
    //  Destructor
    ~Stack()
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }//Shan_72387_DS_LAB

    //  Check whether stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }//Shan_72387_DS_LAB

    //  Push: Insert element at the top
    void push(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;

        count++;

        cout << value << " pushed into stack." << endl;
    }
//Shan_72387_DS_LAB
    // Pop: Remove element from the top
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }
        else
        {
            Node* temp = head;//Shan_72387_DS_LAB

            cout << temp->data << " popped from stack." << endl;

            head = head->next;

            delete temp;

            count--;//Shan_72387_DS_LAB
        }
    }

    // Top: Return the top element
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
//Shan_72387_DS_LAB
        return head->data;
    }

    // Size: Return number of elements
    int size()
    {
        return count;
    }
};

// Main function
int main()
{
    Stack s;

    s.push(10);
    s.push(20);//Shan_72387_DS_LAB
    s.push(30);

    cout << "\nTop element: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    s.pop();//Shan_72387_DS_LAB

    cout << "\nTop element after pop: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    if (s.isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else//Shan_72387_DS_LAB
    {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}