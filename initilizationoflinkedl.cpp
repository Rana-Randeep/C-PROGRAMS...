#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;

    Node(int new_data){
     data=new_data;
     next=nullptr;
    }
};

void printLL(Node* head){
    while(head!=nullptr){
     cout<<head->data;
        if(head->next!=nullptr){
         cout<<" -> ";
        }
        head=head->next;
    }
}

int main(){
 Node* head= new Node(2);
 cout<<"Data = "<<head->data<<" and null value = "<<head->next<<endl;

 head->next=new Node(3);
 cout<<"Data = "<<head->next->data<<" and null value = "<<head->next->next<<endl;

 head->next->next=new Node(4);
 cout<<"Data = "<<head->next->next->data<<" and null value = "<<head->next->next->next<<endl;

 cout<<"Linked List:"<<endl;
 printLL(head);
}