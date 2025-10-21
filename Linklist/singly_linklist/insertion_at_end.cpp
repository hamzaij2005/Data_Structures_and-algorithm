#include<iostream>
using namespace std;
class node{
    public:     
        int data;
        node* next;
};
node* head=NULL;
void insertion_at_start(int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insert_at_end(int value){
    node* newnode=new node;
    node* temp=head;
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        insertion_at_start(value);
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
    insertion_at_start(100);
    insertion_at_start(200);
    insertion_at_start(300);
    insertion_at_start(400);
    insertion_at_start(500);
    insertion_at_start(600);
    display();
    cout<<endl;
    cout<<"Now doing Insertion at end : "<<endl;
    insert_at_end(50);
    display();
    return 0;
}