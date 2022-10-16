void removeFromHead(){
    if(head == NULL){ return; }
    else{
        if(head->getNext() == NULL){
            delete(head);
            head = NULL;
        }
        else{
            Node *temp = head;
            head = head->getNext();
            delete(temp);
        }
    }
}
