/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
// Node * reverse(Node*head){
//     if(head == NULL || head -> next == NULL) return head;

//     Node* newHead = reverse(head->next);
//     Node * front = head->next;
//     front->next = head;
//     head->next = NULL;
//     return newHead;
// }

int addHelper(Node*temp){
    if(temp == NULL) return 1;
    int carry = addHelper(temp->next);
    temp->data += carry;
    if(temp -> data < 10) return 0;
    temp -> data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    //Recursive Solution
    int carry = addHelper(head);
    if(carry == 1){
        Node* newNode = new Node(1);
        newNode -> next = head;
        return newNode;
    }
    return head;
    //Iterative Solution
//     head = reverse(head);
//    Node*temp = head;
//    int carry = 1;

//    while(temp != NULL){
//        temp -> data += carry;

//        if(temp->data < 10){
//            carry = 0;
//            break;
//        }
//        else{
//            temp->data = 0;
//            carry = 1;
//        }
//        temp = temp->next;
//    } 

//    if(carry == 1){
//        Node* newNode = new Node(1);
//        head = reverse(head);
//        newNode -> next = head;
//        return newNode;
//    }
//    head = reverse(head);
//    return head;
}
