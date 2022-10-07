/*-----------isSorted Function 2014 Long------------*/
    
    bool isSorted(){
        Node* temp = this->head;
        while(temp->getNext()->getNext() != NULL){
            if(temp->getData() > temp->getNext()->getData()){ return false; }
            temp = temp->getNext();
        }
        if(temp->getData() > temp->getNext()->getData()){ return false; }
        return true;
    }
