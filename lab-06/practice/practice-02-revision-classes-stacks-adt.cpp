#include <iostream>
using namespace std;
class Stack
{
private:
    //Shan_72387_DSA_LAB_6
    struct Node
    {
        int data;
        Node* next;
    };
    Node* topNode;
    int count;
public:
    //Shan_72387_DSA_LAB_6
    Stack()
    {
        topNode = nullptr;
        count = 0;
    }
   //Shan_72387_DSA_LAB_6
    ~Stack()
    {
        while (topNode != nullptr)
        {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }
    //Shan_72387_DSA_LAB_6
    bool isEmpty()
    {
        return topNode == nullptr;
    }
   //Shan_72387_DSA_LAB_6
    void push(int value)
    {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = topNode;

        topNode = newNode;
        count++;
    }
    //Shan_72387_DSA_LAB_6
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }

        Node* temp = topNode;

        int value = temp->data;

        topNode = topNode->next;

        delete temp;

        count--;

        return value;
    }
   //Shan_72387_DSA_LAB_6
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        return topNode->data;
    }
    //Shan_72387_DSA_LAB_6
    int size()
    {
        return count;
    }
};
int main()
{
    Stack s;

   //Shan_72387_DSA_LAB_6
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

   //Shan_72387_DSA_LAB_6
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    cout << "Is stack empty? ";

    if (s.isEmpty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}