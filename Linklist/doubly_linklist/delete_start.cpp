#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
};

node* head = NULL;

// Insert at start
void insert_at_start(int value) {
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    newnode->prev = NULL;

    if(head != NULL) {
        head->prev = newnode;
    }
    head = newnode;
}

// Insert at end
void insert_at_end(int value) {
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL) {
        insert_at_start(value);
        return;
    }

    node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;
}

// Insert at specific position
void insert_at_position(int value, int pos) {
    if(pos == 1) {
        insert_at_start(value);
        return;
    }

    node* temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    node* newnode = new node;
    newnode->data = value;
    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newnode;

    temp->next = newnode;
}

// Delete at start
void delete_at_start() {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    node* temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}

// Display the list
void display() {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insert_at_start(100);
    insert_at_start(200);
    insert_at_end(50);
    insert_at_position(999, 2); // insert 999 at position 2

    cout << "Doubly Linked List: ";
    display();

    cout << "After deleting at start: ";
    delete_at_start();
    display();

    return 0;
}
