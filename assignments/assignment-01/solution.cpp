#include <iostream>
#include <string>
using namespace std;

class Patient {
public:
    int id; 
    string name; 

    Patient() { id = 0; name = ""; }
    Patient(int i, string n) { id = i; name = n; }
    int getId() { return id; } 
};

class Node {
public:
    Patient data; 
    Node* next; 

    Node(Patient p) {
        data = p; 
        next = NULL; 
    }
};

class PatientList {
public:
    Node* head;

    PatientList() {
        head = NULL;
    }

    void addPatient(Patient p) {
        Node* newNode = new Node(p); 
        newNode->next = head; 
        head = newNode; 
        cout << "Patient added successfully" << endl; 
    }

    bool searchPatient(int targetID) {
        Node* current = head; 
        while (current != NULL) { 
            if (current->data.getId() == targetID) { 
                cout << "Found: " << current->data.name << endl; 
                return true; 
            }
            current = current->next; 
        }
        cout << "Patient not found" << endl; 
        return false; 
    }

    bool removePatient(int targetID) {
        if (head == NULL) { 
            return false; 
        }

        if (head->data.getId() == targetID) { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            cout << "Patient removed" << endl; 
            return true; 
        }

        Node* current = head; 
        while (current->next != NULL && current->next->data.getId() != targetID) { 
            current = current->next; 
        }

        if (current->next != NULL) { 
            Node* temp = current->next; 
            current->next = temp->next; 
            delete temp; 
            cout << "Patient removed" << endl; 
            return true; 
        }

        return false; 
    }
};

int main() {
    PatientList list; 

    list.addPatient(Patient(101, "AliShan")); 
    list.addPatient(Patient(102, "Shan")); 

    list.searchPatient(101); 
    list.removePatient(101); 
    list.searchPatient(101); 

    return 0; 
}