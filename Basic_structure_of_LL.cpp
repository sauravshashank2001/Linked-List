#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

//print LL
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//Take input LL
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newNode =new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        tail->next=newNode;
        tail=tail->next;
        cin>>data;
    }
    return head;
}

int main(){
    Node *head=takeinput();
    print(head);
    
}



