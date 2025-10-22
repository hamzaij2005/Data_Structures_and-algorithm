#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
};

// Top of the stack
Node* top = NULL;

// Push operation
void push(int value) {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    cout << value << " pushed to stack" << endl;
}

// Pop operation
void pop() {
    if(top == NULL) {
        cout << "Stack Underflow!" << endl;
        return;
    }
    Node* temp = top;
    cout << top->data << " popped from stack" << endl;
    top = top->next;
    delete temp;
}

// Peek top element
void peek() {
    if(top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Top element: " << top->data << endl;
}

// Display stack
void display() {
    if(top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }
    Node* temp = top;
    cout << "Stack elements: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();
    display();

    pop();
    pop();
    pop(); // Try popping from empty stack

    return 0;
}
