#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* pre;
};
node* head=NULL;

void insert(int value){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=head;
    newnode->pre=NULL;
    if(head!=NULL){
        head->pre=newnode;
    }
    head=newnode;
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    insert(500);
    display();
    return 0;
}