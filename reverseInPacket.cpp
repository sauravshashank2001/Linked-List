Node *reverseinPacket(Node *head,int x){
    Node *temp1=head;
    Node *temp=temp1;
    Node *prev=NULL;
    Node *tail=head;
    int count=0;
    while(count<x){
        tail=tail->next;
        count++;
    }
    while(temp->data!=tail->data){
        temp1=temp1->next;
        temp->next=prev;
        prev=temp;
        temp=temp1;
    }
    Node *temp2=prev;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=tail;
    return prev;
    
    
    
}