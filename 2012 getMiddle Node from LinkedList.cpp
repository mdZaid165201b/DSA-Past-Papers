/*--------------2012 Long Question---------------- */

Node* getMiddleNode(Node* head){
        if(isEmpty()){ return NULL; }
        else{
            cout<<"Length of LinkedList "<<getLength()<<endl;
            int middle = getLength() / 2;
            // cout<<middle;
            Node* temp = this->head;
            for(int i = 0; i < middle; i++ ){
                temp = temp->getNext();
            }
            return temp;
        }
}
