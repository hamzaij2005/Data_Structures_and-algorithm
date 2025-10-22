#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* prev;
};
node* head=NULL;
void insert_at_start(int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next=head;
    if(head!=NULL){
        head->prev=newnode;
    }
    head=newnode;
}
void insert_at_end(int value){
    node*newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        insert_at_start(value);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl<<endl;
    
}
int main(){

    return 0;
}