#include<iostream>
using namespace std;
class node{
    public:     
        int data;
        node* next;
};
node* head=NULL;
void insert(int value){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void del(){
    if(head==NULL){
        cout<<"LIST IS EMPTY"<<endl;
        return ;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl<<endl;
}


int main(){
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    insert(500);
    display();
    del();
    display();

}