
/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    //Write your code here
    Node *prev=NULL,*curr=head;
    int count =1;
    while(curr != NULL){
        if(count == 1){
            curr=curr->next;
            prev=head;
        }
        else if(count%2 == 0){
            Node *temp = curr->next;
            prev->next = temp;
            curr = temp;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
        count++;
    }
}
