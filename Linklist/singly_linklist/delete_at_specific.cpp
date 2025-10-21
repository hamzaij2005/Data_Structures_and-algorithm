#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* head = NULL;

// Insert at start
void insert_at_start(int value) {
    node* newnode = new node;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

// Insert at end
void insert_at_end(int value) {
    if (head == NULL) {
        insert_at_start(value);
        return;
    }
    node* newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Insert at specific position
void insert_at_specific(int value, int pos) {
    if (pos == 1) {
        insert_at_start(value);
        return;
    }
    node* newnode = new node;
    node* temp = head;
    newnode->data = value;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete from start
void delete_from_start() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

// Delete from end
void delete_from_end() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->next == NULL) {
        delete_from_start();
        return;
    }
    node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// Delete from specific position
void delete_at_specific(int pos) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (pos == 1) {
        delete_from_start();
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// Display list
void display() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl << endl;
}

int main() {
    // Example test
    insert_at_end(10);
    insert_at_end(20);
    insert_at_end(30);
    insert_at_specific(25, 3);
    display();

    delete_at_specific(2);
    display();

    delete_from_end();
    display();

    delete_from_start();
    display();

    return 0;
}
