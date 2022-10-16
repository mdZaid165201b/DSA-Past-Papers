int countDuplicates(int key){
    if(head == NULL){ return 0; }
    else{
            int count = 0;
            Node *temp = head;
            while(temp){
                if(temp->getData() == key){ count++; }
                temp = temp->getNext();
            }
            return count;
    }
}
