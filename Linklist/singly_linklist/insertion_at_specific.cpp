#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
node* head=NULL;
void insert_at_start(int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insert_at_end(int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    node* temp=head;
    if(head==NULL){
        insert_at_start(value);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newnode;
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    cout<<" INSERT AT START "<<endl;
    insert_at_end(75);
    insert_at_start(100);
    insert_at_start(200);
    insert_at_start(300);
    insert_at_start(400);
    insert_at_start(500);
    insert_at_start(600);
    display();
    cout<<endl;
    cout<<"Now doing Insertion at end : "<<endl;
    insert_at_end(50);
    display();
    return 0;
}