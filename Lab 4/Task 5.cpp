#include<iostream>
using namespace std;
//Shan-72387-BSAI-DS-LAB-Task
struct Node
{
	int data;
	Node* next;
};
//Shan-72387-BSAI-DS-LAB-Task
class LinkedList
{
private:
	Node* head;
public:
	LinkedList() 
	{
		head = NULL;
	}
//Shan-72387-BSAI-DS-LAB-Task
	void append(int value)
	{
		Node* newNode = new Node;

		newNode->data = value;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;//Shan-72387-BSAI-DS-LAB-Task
		}
		else
		{
			Node* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
		}
	}//Shan-72387-BSAI-DS-LAB-Task
//Shan-72387-BSAI-DS-LAB-Task
	void insert(int position, int value) 
	{
		Node* newNode = new Node;
		newNode->data = value;
//Shan-72387-BSAI-DS-LAB-Task
		if (position == 1) 
		{
			newNode->next = head;
			head = newNode;
		}
		else //Shan-72387-BSAI-DS-LAB-Task
		{
			Node* current = head;

			for (int i = 1; i < position - 1; i++) 
			{
				current = current->next;
			}
//Shan-72387-BSAI-DS-LAB-Task
			newNode->next = current->next;
			current->next = newNode;
		}
	}
//Shan-72387-BSAI-DS-LAB-Task
	void remove(int position) 
	{
		if (position == 1) 
		{
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		else 
		{
			Node* current = head;
//Shan-72387-BSAI-DS-LAB-Task
			for (int i = 1; i < position - 1; i++) 
			{
				current = current->next;
			}

			Node* temp = current->next;
			current->next = temp->next;
			delete temp;
		}
	}
//Shan-72387-BSAI-DS-LAB-Task
	void display()
	{
		Node* current = head;

		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->next;
		}

		cout << endl;
	}
};
//Shan-72387-BSAI-DS-LAB-Task
int main()
{
	LinkedList list;

	int n, value, position;

	cout << "How many values do you want to append? "<<endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter value: "<<endl;
		cin >> value;

		list.append(value);
	}

	cout << "Linked List after append: "<<endl;
//Shan-72387-BSAI-DS-LAB-Task
	list.display();

	cout << "Enter position to insert: "<<endl;
	cin >> position;

	cout << "Enter value to insert: "<<endl;
	cin >> value;
//Shan-72387-BSAI-DS-LAB-Task
	list.insert(position, value);

	cout << "Linked List after insert: "<<endl;
//Shan-72387-BSAI-DS-LAB-Task
	list.display();

	cout << "Enter position to delete: "<<endl;
	cin >> position;
//Shan-72387-BSAI-DS-LAB-Task
	list.remove(position);

	cout << "Linked List after delete: "<<endl;
//Shan-72387-BSAI-DS-LAB-Task
	list.display();


	return 0;
}