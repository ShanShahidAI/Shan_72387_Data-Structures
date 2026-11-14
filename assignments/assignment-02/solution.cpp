#include <iostream>
#include <string>
using namespace std;
// Q1: Singly Linked List - Patient Registration
class SNode {
public:
    int id, age;
    string name, disease;
    SNode* next;
//72387_Shan_DSA_Assignment_2
    SNode(int i, string n, int a, string d) {
        id = i; name = n; age = a; disease = d;
        next = NULL;
    }
};
//72387_Shan_DSA_Assignment_2
class PatientRegistration {
public:
    SNode* head;
    PatientRegistration() { head = NULL; }
//72387_Shan_DSA_Assignment_2
    void addPatient(int id, string name, int age, string disease) {
        SNode* newNode = new SNode(id, name, age, disease);
        if (head == NULL) {
            head = newNode;
            return;
        }
        SNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void searchPatient(int targetID) {
        SNode* temp = head;
        while (temp != NULL) {
            if (temp->id == targetID) {
                cout << "Found: " << temp->name << " | Disease: " << temp->disease << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Patient not found!\n";
    }//72387_Shan_DSA_Assignment_2
    void removePatient(int targetID) {
        if (head == NULL) return;
        if (head->id == targetID) {
            SNode* temp = head;
            head = head->next;
            delete temp;
            cout << "Patient removed successfully.\n";
            return;
        }
        SNode* temp = head;
        while (temp->next != NULL && temp->next->id != targetID) {
            temp = temp->next;
        }
        if (temp->next != NULL) {
            SNode* delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
            cout << "Patient removed successfully.\n";
        } else {
            cout << "Patient not found!\n";
        }
    }//72387_Shan_DSA_Assignment_2
    void display() {
        SNode* temp = head;
        cout << "\n--- Registered Patients ---\n";
        while (temp != NULL) {
            cout << temp->id << " | " << temp->name << " | " << temp->age << " | " << temp->disease << endl;
            temp = temp->next;
        }
    }
};
// Q2: Doubly Linked List - Patient History
class DNode {
public:
    int id;
    string name, treatment;
    DNode* prev;
    DNode* next;
    DNode(int i, string n, string t) {
        id = i; name = n; treatment = t;
        prev = NULL;
        next = NULL;
    }
};//72387_Shan_DSA_Assignment_2
class PatientHistory {
public:
    DNode* head;
    PatientHistory() { head = NULL; }
    void addHistory(int id, string name, string treatment) {
        DNode* newNode = new DNode(id, name, treatment);
        if (head == NULL) {
            head = newNode;
            return;
        }//72387_Shan_DSA_Assignment_2
        DNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void displayForward() {
        DNode* temp = head;
        cout << "\n--- Patient History (Forward) ---\n";
        while (temp != NULL) {
            cout << temp->id << " | " << temp->name << " | " << temp->treatment << endl;
            temp = temp->next;
        }
    }//72387_Shan_DSA_Assignment_2
    void displayReverse() {
        if (head == NULL) return;
        DNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        cout << "\n--- Patient History (Reverse) ---\n";
        while (temp != NULL) {
            cout << temp->id << " | " << temp->name << " | " << temp->treatment << endl;
            temp = temp->prev;
        }
    }
};
// Q3: Circular Linked List - Appointments
class CNode {
public:
    int id;
    string name;
    CNode* next;
//72387_Shan_DSA_Assignment_2
    CNode(int i, string n) {
        id = i; name = n;
        next = NULL;
    }
};

class AppointmentManagement {
public:
    CNode* head;
    CNode* currentTurn;
//72387_Shan_DSA_Assignment_2
    AppointmentManagement() {
        head = NULL;
        currentTurn = NULL;
    }

    void addAppointment(int id, string name) {
        CNode* newNode = new CNode(id, name);
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            currentTurn = head;
            return;
        }
        CNode* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    void display() {
        if (head == NULL) return;
        CNode* temp = head;
        cout << "\n--- Scheduled Appointments (Circular) ---\n";
        do {
            cout << temp->id << " | " << temp->name << endl;
            temp = temp->next;
        } while (temp != head);
    }//72387_Shan_DSA_Assignment_2
    void nextAppointment() {
        if (currentTurn == NULL) return;
        cout << "Current Attended: " << currentTurn->name << endl;
        currentTurn = currentTurn->next;
        cout << "Next in Turn: " << currentTurn->name << endl;
    }
};
// Q4: Stack ADT - Emergency Management
class ENode {
public:
    int id;
    string name;
    ENode* next;
//72387_Shan_DSA_Assignment_2
    ENode(int i, string n) {
        id = i; name = n;
        next = NULL;
    }
};

class EmergencyStack {
public:
    ENode* top;
    EmergencyStack() { top = NULL; }
    void push(int id, string name) {
        ENode* newNode = new ENode(id, name);
        newNode->next = top;
        top = newNode;
        cout << name << " added to Emergency Stack.\n";
    }
    void pop() {
        if (top == NULL) {
            cout << "No emergency cases.\n";
            return;
        }
        ENode* temp = top;
        cout << "Treated: " << temp->name << endl;
        top = top->next;
        delete temp;
    }//72387_Shan_DSA_Assignment_2
    void peek() {
        if (top == NULL) {
            cout << "Emergency stack is empty.\n";
            return;
        }
        cout << "Top Critical Patient: " << top->name << endl;
    }
    void display() {
        ENode* temp = top;
        cout << "\n--- Emergency Ward (Stack) ---\n";
        while (temp != NULL) {
            cout << temp->id << " | " << temp->name << endl;
            temp = temp->next;
        }
    }
};
// Q5: Menu-Driven Main Function
int main() {
    PatientRegistration reg;
    PatientHistory hist;
    AppointmentManagement appt;
    EmergencyStack er;
//72387_Shan_DSA_Assignment_2
    reg.addPatient(101, "Ali", 25, "Fever");
    reg.addPatient(102, "Shan", 22, "Flu");
    reg.addPatient(103, "Sara", 30, "Injury");
    reg.addPatient(104, "Hamza", 28, "Cough");
    reg.addPatient(105, "Zahid", 40, "Asthma");

    hist.addHistory(101, "Ali", "Paracetamol");
    hist.addHistory(102, "Shan", "Antibiotics");

    appt.addAppointment(101, "Ali");
    appt.addAppointment(102, "Shan");
    appt.addAppointment(103, "Sara");
    appt.addAppointment(104, "Hamza");

    er.push(101, "Ali");
    er.push(105, "Zahid");
//72387_Shan_DSA_Assignment_2
    int choice = 0;
    while (choice != 5) {
        cout << "\n====================================\n";
        cout << "  HOSPITAL PATIENT MANAGEMENT SYSTEM\n";
        cout << "====================================\n";
        cout << "1. Patient Registration (Singly List)\n";
        cout << "2. Patient History (Doubly List)\n";
        cout << "3. Appointment Management (Circular List)\n";
        cout << "4. Emergency Management (Stack)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
//72387_Shan_DSA_Assignment_2
        if (choice == 1) {
            int sub;
            cout << "1. Add  2. Search  3. Remove  4. Display: ";
            cin >> sub;
            if (sub == 1) {
                int id, age; string name, dis;
                cout << "Enter ID, Name, Age, Disease: ";
                cin >> id >> name >> age >> dis;
                reg.addPatient(id, name, age, dis);
            } else if (sub == 2) {
                int id; cout << "Enter ID: "; cin >> id;
                reg.searchPatient(id);
            } else if (sub == 3) {
                int id; cout << "Enter ID: "; cin >> id;
                reg.removePatient(id);
            } else if (sub == 4) {
                reg.display();
            }
        }
        else if (choice == 2) {
            int sub;
            cout << "1. Add History  2. Forward View  3. Reverse View: ";
            cin >> sub;
            if (sub == 1) {
                int id; string name, trt;
                cout << "Enter ID, Name, Treatment: ";
                cin >> id >> name >> trt;
                hist.addHistory(id, name, trt);
            } else if (sub == 2) {
                hist.displayForward();
            } else if (sub == 3) {
                hist.displayReverse();
            }
        }
        else if (choice == 3) {
            int sub;
            cout << "1. Add Appointment  2. Display All  3. Next Turn: ";
            cin >> sub;
            if (sub == 1) {
                int id; string name;
                cout << "Enter ID, Name: ";
                cin >> id >> name;
                appt.addAppointment(id, name);
            } else if (sub == 2) {
                appt.display();
            } else if (sub == 3) {
                appt.nextAppointment();
            }
        }
        else if (choice == 4) {
            int sub;
            cout << "1. Push  2. Pop  3. Peek  4. Display: ";
            cin >> sub;
            if (sub == 1) {
                int id; string name;
                cout << "Enter ID, Name: ";
                cin >> id >> name;
                er.push(id, name);
            } else if (sub == 2) {
                er.pop();
            } else if (sub == 3) {
                er.peek();
            } else if (sub == 4) {
                er.display();
            }
        }
    }
    cout << "Program Finished.\n";
    return 0;
}