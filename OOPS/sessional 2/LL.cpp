/*
Write an interactive program in C++ using self-referential classes. The program
should support insertion at end and deletion in the beginning on a single link list.
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insert at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " at the end of the list." << endl;
    }

    // Delete from the beginning of the linked list
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty. Nothing to delete." << endl;
        } else {
            Node* temp = head;
            head = head->next;
            cout << "Deleted " << temp->data << " from the beginning of the list." << endl;
            delete temp;
        }
    }

    // Display the linked list
    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
        } else {
            Node* temp = head;
            cout << "\nDisplay Linked List : \n";
            while (temp != nullptr) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value;

    while (true) {
        cout << "\n--- Linked List Menu ---" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Delete from Beginning" << endl;
        cout << "3. Display List" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 2:
                list.deleteFromBeginning();
                break;
            case 3:
                list.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}