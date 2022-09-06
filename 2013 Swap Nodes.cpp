/*--------- 2013 Swap Nodes------------*/
    void swapNodes(int index1,int index2){
        Node* prev1;
        Node* curr1;
        Node* prev2;
        Node* curr2;
        curr1 = this->head;
        curr2 = this->head;
        Node* forHead = NULL;
        for(int i = 1;i<=index2;i++){
            prev2 = curr2;
            curr2 = curr2->getNext();
        }
        
        if(index1 == 1){
            prev1 = NULL;
            Node* temp = curr1;
            forHead = curr2;
            prev1 = curr2->getNext();
            curr2->setNext(curr1->getNext());
            curr1->setNext(prev1);
            prev2->setNext(curr1);
            this->head = forHead;
            return;
        }
        else{
            for(int i = 1;i<=index1;i++){
                prev1 = curr1;
                curr1= curr1->getNext();
            }
            Node *temp = curr1->getNext();
            curr1->setNext(curr2->getNext());
            prev2->setNext(curr1);
            prev1->setNext(curr2);
            curr2->setNext(temp);
        }
    }
