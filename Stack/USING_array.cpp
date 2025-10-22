#include <iostream>
using namespace std;

#define MAX 100
//first in last out
class Stack {
    int top;

public:
    int arr[MAX];

    Stack() { top = -1; }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    bool isFull() {
        return top == MAX - 1;
    }

    // Push element
    void push(int value) {
        if(isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack" << endl;
    }

    // Pop element
    void pop() {
        if(isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl;
    }

    // Peek top element
    void peek() {
        if(isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    // Display stack
    void display() {
        if(isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}
