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
void insert_at_end(int value){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=NULL;
    node* temp=head;
    if(head==NULL){
        insert_at_start(value);
        return ;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}
// void del_at_end(){
//     if (head == NULL) {
//         cout << "List is empty, nothing to delete!" << endl;
//         return;
//     }
//     node* temp=head;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=NULL;
// }
void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl<<endl;
}
void del_at_start(){
    if(head==NULL){
        cout<<"empty"<<endl;
        return ;
    }
    node* temp =head;
    head=head->next;
    delete temp;
}
void del_at_end(){
    if(head==NULL){
        cout<<"empty"<<endl;
        return ;
    }
    
    if(head->next==NULL){
        del_at_start();
        return ;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}

int main(){
    insert_at_start(300);
    insert_at_end(100);
    insert_at_start(200);
    insert_at_end(400);
    display();
    del_at_end();
    del_at_end();
    display();
   
   
    return 0;
}