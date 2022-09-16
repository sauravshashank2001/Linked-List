//INSERTING Node

Node *insertNode(Node *head,int x,int data){
    Node *temp=head;
    
    Node *newNode=new Node(data);
    int count=0;
    if(x==0){
       newNode->next=head;
       head=newNode;
       return head;
       
    }
    while(count<x-1){
        temp=temp->next;
        count++;
    }
    // Node *temp1=temp->next;
    // temp->next=newNode;
    // newNode->next=temp1;
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}
