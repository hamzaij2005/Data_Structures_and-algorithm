#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    // Enqueue
    void enqueue(int value) {
        if(isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if(isEmpty())
            front = 0;
        arr[++rear] = value;
        cout << value << " enqueued" << endl;
    }

    // Dequeue
    void dequeue() {
        if(isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front] << " dequeued" << endl;
        if(front == rear)  // Last element
            front = rear = -1;
        else
            front++;
    }

    // Peek front element
    void peek() {
        if(isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    // Display queue
    void display() {
        if(isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for(int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();

    q.dequeue();
    q.display();

    return 0;
}
