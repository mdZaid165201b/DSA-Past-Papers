void insertAtEnd(int val){
    if(head == NULL){
        head = new Node(val);
    }
    else{
        Node *endNode = head->getPrev();
        Node *newNode = new Node(val);
        endNode->setNext(newNode);
        newNode->setNext(head);
        head->setPrev(newNode);
    }
}
