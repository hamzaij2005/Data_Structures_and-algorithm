#include<iostream>
using namespace std;
class node{
    public: 
        int data;
        node* next;
};
node* head=NULL;
void insert(int value){
    node* newnode=new node;
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
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display();
    return 0;
}