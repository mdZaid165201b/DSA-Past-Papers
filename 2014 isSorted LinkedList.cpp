/*-----------isSorted Function 2014 Long------------*/
    
    bool isSorted(){
        Node* temp = this->head;
        Node* temp2;
        while(temp->getNext()->getNext() != NULL){
            if(temp->getData()>temp->getNext()->getData()){ return false; }
            temp = temp->getNext();
        }
        return true;
    }
