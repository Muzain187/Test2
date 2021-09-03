/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/

/*
class Deque {
    // Complete this class
    int *data;
    int nextindex,capacity,firstIndex,size;
    int size;
    public:
    Deque(int size){
        data = new int[size];
        capacity= size;
        nextIndex = 0;
        firstIndex = 0;
        this->size = 0;
    }
    void insertFront(int element){
        if ((front == 0 && rear == size-1)||front == rear+1)
            
    }
    void insertRear(int element){
        data[nextIndex] = element;
        nextIndex++;
    }
    
};*/

class Deque 
{ 
    int  *data;
    int  front; 
    int  rear; 
    int  size; 
    public : 
        Deque(int size) { 
            data = new int[size];
            front = -1; 
            rear = 0; 
            this->size = size; 
        } 


    bool  isFull(){
        return ((front == 0 && rear == size-1)||front == rear+1);    
    } 

    bool  isEmpty(){
        return (front == -1);  
        }


    // Insert an element at front of the deque
    void insertFront(int key) 
    { 
    if (isFull())  { 
        cout <<"-1"<<endl; 
        return; 
    } 

        // If queue is initially empty,set front=rear=0; start of deque 
    if (front == -1)  { 
        front = 0; 
        rear = 0; 
      } 
    else if (front == 0)              // front is first position of queue 
    	front = size - 1 ; 
    else // decrement front 1 position 
    	front = front-1; 

    	data[front] = key ;            // insert current element into Deque
    } 

    // insert element at the rear end of deque 
    void insertRear(int key) 
    { 
        if (isFull()) { 
            cout <<"-1"<< endl; 
            return; 
        } 

        //  If queue is initially empty,set front=rear=0; start of deque 
        if (front == -1) { 
            front = 0; 
            rear = 0; 
        } 
        else if (rear == size-1)               // rear is at last position of queue
            rear = 0; 
        else                            // increment rear by 1 position 
            rear = rear+1; 

         data[rear] = key ;         // insert current element into Deque
    } 

    // Delete element at front of Deque 
    void deleteFront() 
    { 
    if (isEmpty()) 
      { 
        cout<<"-1"<< endl; 
        return ; 
       } 

        // Deque has only one element 
         if (front == rear) 
        { 
            front = -1; 
            rear = -1; 
        } 
        else
                // back to initial position 
        if (front == size -1) 
        	front = 0; 

        else // remove current front value from Deque;increment front by 1
        	front = front+1; 
        } 

    // Delete element at rear end of Deque 
    void deleteRear() 
    { 
        if (isEmpty()) 
        { 
            cout<<"-1"<< endl ; 
            return ; 
        } 

            // Deque has only one element 
        if (front == rear) 
        { 
        front = -1; 
        rear = -1; 
        } 
        else if (rear == 0) 
        	rear = size-1; 
        else
        	rear = rear-1; 
    } 
    // retrieve front element of Deque 
    int getFront() 
    { 
        if (isEmpty())   { 
            // cout <<"-1"<< endl; 
            return -1 ; 
        } 
        return data[front]; 
    } 

    // retrieve rear element of Deque 
    int getRear() 
    { 
        if(isEmpty() || rear < 0)  { 
            // cout <<"-1"<<endl; 
            return -1 ; 
        } 
        return data[rear]; 
    } 
};

