#include<iostream>
using namespace std;
class node{
    public: 
        int data;
        node* next;
};
node* head=NULL;
void insert_at_start(int value){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    insert_at_start(100);
    insert_at_start(200);
    insert_at_start(300);
    insert_at_start(400);
    insert_at_start(500);
    display();

    return 0;
}