//DELETING Node

Node *deleteNode(Node *head,int x){
    Node *temp=head;
    int count=0;
    if(x==0){
        head=head->next;
        return head;
    }
    while(count<x-1){
        temp=temp->next;
        count++;
    }
    
    temp->next=temp->next->next;
    return head;
}