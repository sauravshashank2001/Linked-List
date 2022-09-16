Node *reverseLL(Node *head){
    Node *temp=head;
    Node *prev=NULL;
    while(head!=NULL){
        head=head->next;
        temp->next=prev;
        prev=temp;
        temp=head;
        
    }
    return prev;
}