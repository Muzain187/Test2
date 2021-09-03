/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/
Node *reverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *h = reverse(head->next);
    Node *temp = head->next;
    temp->next = head;
    head->next = NULL;
    
    return h;
}


Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    head = reverse(head);
    Node *temp = head;
    int carry = 1,sum;
    Node *prev;
    while(temp!=NULL){
        // temp->data = temp->data + carry;
        if(temp->next == NULL)
            prev = temp;
       	sum = temp->data + carry;
        
    	carry = (sum >= 10)? 1 : 0;
        sum = sum%10;
        temp->data = sum;
        temp = temp->next;
      
    }
    if(carry > 0){
        Node *newNode = new Node(carry);
        prev->next = newNode;
    }
    
    
    head = reverse(head);
    return head;
}



