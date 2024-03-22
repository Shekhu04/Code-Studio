/****************************************************************

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

*****************************************************************/
Node *reverseLinkedList(Node* head) {
    if(head == NULL || head -> next == NULL) return head;
    Node * newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front -> next = head;
    head->next = NULL;
    return newHead;
}
bool isPalindrome(Node *head)
{
    if(head == NULL || head -> next == NULL) return true;

    Node * slow =head;
    Node * fast = head;

    //Find middle of the ll using slow and fast pointer
    while(fast ->next != NULL && fast -> next ->next != NULL){
        slow = slow -> next;
        fast = fast->next->next;
    }
    //Reverse the second half of the linked list starting from the middle
    Node* newHead = reverseLinkedList(slow->next);
    //Pointer the first half
    Node* first = head;
    //Pointer to the second half
    Node*second=newHead;

    while(second != NULL){
        if(first->data != second->data){
            reverseLinkedList(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverseLinkedList(newHead);
    return true;
}
