sertEnd(int val) {
    Node *newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}