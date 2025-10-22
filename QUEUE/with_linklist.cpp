#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
};

// Front and rear pointers
Node* front = NULL;
Node* rear = NULL;

// Enqueue operation (insert at rear)
void enqueue(int value) {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = NULL;

    if(front == NULL) {  // Empty queue
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
    cout << value << " enqueued" << endl;
}

// Dequeue operation (remove from front)
void dequeue() {
    if(front == NULL) {
        cout << "Queue Underflow!" << endl;
        return;
    }
    Node* temp = front;
    cout << front->data << " dequeued" << endl;
    front = front->next;
    delete temp;
    if(front == NULL) {  // Queue became empty
        rear = NULL;
    }
}

// Peek front element
void peek() {
    if(front == NULL) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Front element: " << front->data << endl;
}

// Display queue
void display() {
    if(front == NULL) {
        cout << "Queue is empty!" << endl;
        return;
    }
    Node* temp = front;
    cout << "Queue elements: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue(); // Underflow test

    return 0;
}
