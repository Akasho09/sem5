#include <iostream>
using namespace std ;

class Node {
public :
    int data ;
    Node * next ;
Node () {} ;
Node (int d) {
    this->data = d;
    next = nullptr;
}
};

int main  () {
    // Creating the first node
Node* head = new Node (10);
    // Creating the second node
Node* second = new Node(20);

// Linking the first node to the second
    head->next = second;

Node* third = new Node(30);
    second->next = third;

    // Displaying the linked list
Node * current = head ;
while(current!=nullptr) {
cout << current->data <<"  ";
current = current->next;
}



   // Freeing the memory
    delete head;
    delete second;
    delete third;

}