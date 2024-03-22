#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

//Recursive Solution

Node* reverseLinkedList(Node *head)
{ 
    if (head == NULL || head -> next == NULL){
        return head;
    }
    Node * newHead = reverseLinkedList(head -> next);
    Node* front = head -> next;
    front -> next = head;
    head->next = NULL;
    return newHead;


    //Iterative Solution

   /*//Empty or single node linked list
   if(head == NULL || head -> next == NULL){
	   return head;
   }

   Node* prev = NULL;
   Node* curr = head;
   while(curr != NULL){
	   Node* forward = curr -> next;
	   curr -> next = prev;
	   prev = curr;
	   curr = forward;
   }
   return prev;*/
}

