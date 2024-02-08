Node *cloneLL(Node *head) {

    if (head == NULL) {

        return NULL;

    }

 

    Node *temp = head;

 

    // Step 1: Inserting the copied nodes in between the linked list

    while (temp != NULL) {

        Node *newNode = new Node(temp->data);

        newNode->next = temp->next;

        temp->next = newNode;

        temp = temp->next->next;

    }

 

    temp = head;

 

    // Step 2: Setting random pointers for copied nodes

    while (temp != NULL) {

        Node *copyNode = temp->next;

        if (temp->random != NULL) {

            copyNode->random = temp->random->next;

        } else {

            copyNode->random = NULL;

        }

        temp = temp->next->next;

    }

 

    temp = head;

    Node *dummyNode = new Node(-1);

    Node *temp2 = dummyNode;

 

    // Step 3: Separating the original and copied linked lists

    while (temp != NULL) {

        temp2->next = temp->next;

        temp2 = temp2->next;

        temp->next = temp->next->next;

        temp = temp->next; 

    }

 

    return dummyNode->next;

}
