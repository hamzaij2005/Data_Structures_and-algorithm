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
    node* temp=head;
    newnode->data=value;
    if(temp==NULL){
        insert_at_start(value);
        return ;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert_at_specific(int value,int pos){
    if(pos==1){
        insert_at_start(value);
        return ;
    }
    node* newnode=new node;
    node* temp=head;
    newnode->data=value;
    for(int i=0;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"INVALID POSITION "<<endl;
        delete newnode;
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void delete_at_start(){
    node* temp=head;
    if(temp==NULL){
        cout<<"List is empty"<<endl;
        return ;
    }
    head=head->next;
    delete temp;
}
void display(){
    node* newnode=new node;
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
    cout<<endl;
    cout<<"Now doing Insertion at specific: "<<endl;
    insert_at_specific(9090,4);
    // insert_at_specific_pos(90900,111);
    display();
    cout<<endl<<endl;
    cout<<"deletion : "<<endl;
    delete_at_start();
    delete_at_start();
    display();
    return 0;
}