/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    if(head==NULL || head->next == NULL) return head;
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    Node* temp = head;

    while(temp){
        if(temp -> data == 0){
            zero ->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            one -> next = temp;
            one = one->next;
        } 
        else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

        zero->next = (oneHead->next )? (oneHead ->next):(twoHead->next);
        one ->next = twoHead ->next;
        two-> next = NULL;

        Node* newHead = zeroHead ->next;

        delete zeroHead;
        delete oneHead;
        delete twoHead;
        

        return newHead;
    
}
