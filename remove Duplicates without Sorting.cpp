void removeDuplicatesTwo(){
        Node *temp = head;
        Node *temp2;
        while(temp != NULL){
            Node *prev= temp;
            temp2 = temp->getNext();
            while(temp2 != NULL){
                if(temp->getData() == temp2->getData()){
                    Node *t = temp2->getNext();
                    Node *t2 = temp2;
                    delete(t2);
                    temp2 = prev;
                    prev->setNext(t);
                }
                prev = temp2;
                temp2 = temp2->getNext();
            }
            temp = temp->getNext();
        }
    }
