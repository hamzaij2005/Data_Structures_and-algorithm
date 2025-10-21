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
void insert_at_specific_pos(int value,int pos){
    if(pos==1){
        insert_at_start(value);
        return ;
    }
    node* newnode=new node();
    node*temp=head;
    newnode->data=value;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"INVALID POSITION "<<endl;
        cout<<"DELETE "<<newnode->data<<endl;
        delete newnode;
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
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
    insert_at_specific_pos(9090,4);
    // insert_at_specific_pos(90900,111);
    display();
    return 0;
}