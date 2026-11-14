#include <iostream>
using namespace std;
class Queue
{
private:
    //Shan_72387_DSA_LAB_6
    struct Node
    {
        int data;
        Node* next;
    };
    Node* front;
    Node* rear;
    int count;
public:
   //Shan_72387_DSA_LAB_6
    Queue()
    {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }
   //Shan_72387_DSA_LAB_6
    ~Queue()
    {
        while (front != nullptr)
        {
            Node* temp = front;
            front = front->next;
            delete temp;
        }

        rear = nullptr;
    }
   //Shan_72387_DSA_LAB_6
    bool isEmpty()
    {
        return front == nullptr;
    }
    //Shan_72387_DSA_LAB_6
    void push(int value)
    {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = nullptr;
      //Shan_72387_DSA_LAB_6
        if (isEmpty())
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
    }
    //Shan_72387_DSA_LAB_6
    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        Node* temp = front;
        int value = temp->data;
        front = front->next;
        //Shan_72387_DSA_LAB_6
        if (front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
        count--;
        return value;
    }
   //Shan_72387_DSA_LAB_6
    int top()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }
   //Shan_72387_DSA_LAB_6
    int size()
    {
        return count;
    }
};
int main()
{
    Queue q;
    //Shan_72387_DSA_LAB_6
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;
    //Shan_72387_DSA_LAB_6
    cout << "Removed: " << q.pop() << endl;
    cout << "Removed: " << q.pop() << endl;
    cout << "Front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;
    cout << "Is queue empty? ";
    if (q.isEmpty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}