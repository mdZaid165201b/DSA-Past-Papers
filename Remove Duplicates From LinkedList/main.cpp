#include <iostream>

using namespace std;

class Node
{
    Node * next;
    int data;
public:
    Node ()
    {
        data = -1;
        next = NULL;
    }
    Node (int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node (Node * next)
    {
        this->next = next;
        this->data = -1;
    }
    Node (int data, Node * next)
    {
        this->data = data;
        this->next = next;
    }
    //Getters and Setters
    int getData ()
    {
        return data;
    }
    Node * getNext ()
    {
        return this->next;
    }
    void setData (int data)
    {
        this->data = data;
    }
    void setNext (Node * next)
    {
        this->next = next;
    }
};
//  --------------LinkedList Class-------------------------
class LinkedList
{
private:
    Node *head;
public:
    LinkedList()
    {
        head = NULL;
    }
    LinkedList(int val)
    {
        insertAtLast(val);
    }
    bool isEmpty()
    {
        return (head == NULL) ? true : false;
    }
    int getLength()
    {
        int count = 0;


        Node * temp = head;
        while (temp != NULL)
        {
            temp = temp->getNext ();
            count++;
        }
        return count;


    }
    void insertAtBegin(int val)
    {
        Node *newNode = new Node(val);
        if(isEmpty())
        {
            head = newNode;
        }
        else
        {
            newNode->setNext(head);
            head = newNode;

        }

    }
    void insertAtLast(int val)
    {
        Node *newNode = new Node(val);

        if(isEmpty())
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while(temp->getNext() != NULL)
            {
                temp = temp->getNext();
            }
            temp->setNext(newNode);
        }
    }
    bool removeFromBegin()
    {
        if(isEmpty())
        {
            return false;
        }
        else
        {
            if(getLength() == 1)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node *temp = head;
                head = temp->getNext();
                delete temp;
                return true;
            }
        }
    }
    bool removeFromLast()
    {
        if(isEmpty())
        {
            return false;
        }
        else
        {
            Node *temp,*prevNode;
            temp = head;
            while(temp->getNext() != NULL)
            {
                prevNode = temp;
                temp = temp->getNext();
            }
            delete temp;
            prevNode->setNext(NULL);
            return true;
        }
    }
    Node *getFirstElement()
    {
        return head;
    }
    Node *getLastElement()
    {
        Node *temp;
        temp = head;
        while(temp->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        return temp;
    }
    void print()
    {
        Node *temp;
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->getData()<<endl;
            temp = temp->getNext();
        }
    }

    Node *getElementFromIndex(int index)
    {
        if(isEmpty())
        {
            return NULL;
        }
        else
        {
            Node *temp = head;
            if(index >=0 && index <=getLength())
            {
                for(int i = 0; i<=index; i++)
                {
                    if(i == index)
                    {
                        return temp;
                    }
                    else
                    {
                        temp= temp->getNext();
                    }
                }
            }
            else
            {
                return NULL;
            }
        }
    }

    // 2015 Long Question that is removeDuplicatesFromLinkedList()
    /*WRONG METHOD*/
//     void removeDuplicates()
//     {
//         Node *temp = head;
//         while(temp!=NULL)
//         {
//             Node *temp2 = temp->getNext();
//             Node *prev;
//             while(temp2!=NULL)
//             {
//                 if(temp->getData() == temp2->getData())
//                 {
//                     if(temp2->getNext() == NULL)
//                     {
//                         delete temp2;
//                         temp2 = NULL;
//                         prev->setNext(NULL);
//                         continue;
//                     }
//                     else
//                     {
//                         prev->setNext(temp2->getNext());
//                         Node *testNode = temp2;
//                         prev = temp2;
//                         delete testNode;
//                     }
//                 }
//                 prev = temp2;
//                 temp2 = temp2->getNext();
//             }
//             temp = temp->getNext();
//         }
//     }
    void removeDuplicates(){
        sort();
        Node *temp = head;
        Node *temp2 = temp->getNext();
        while(temp!=NULL){
            while(temp2!=NULL){
                if(temp->getData() == temp2->getData()){
                    Node *forDeleteNode = temp2;
                    if(temp2->getNext() == NULL){
                        // cout<<"forDeleteNode =>"<<forDeleteNode->getNext()<<endl;
                        // cout<<"if part when temp2->getNext => NULL"<<endl;
                        // cout<<"temp2->getData()"<<temp2->getData()<<endl;
                        // cout<<"temp2->getNext()"<<temp2->getNext()<<endl;
                        // cout<<"temp->getData()"<<temp->getData()<<endl;

                        temp = NULL;
                        temp2 = NULL;
                        removeFromLast();
                        break;
                        
                    }
                    else{
                        temp->setNext(temp2->getNext());
                        temp2 = temp->getNext();
                        delete forDeleteNode;
                        forDeleteNode = NULL;
                        continue;
                    }
                }
                    temp = temp->getNext();
                    temp2 = temp->getNext();
            }
        }
    }
    
};

int main()
{
    LinkedList l1;
    l1.insertAtLast(1);
    l1.insertAtLast(4);
    l1.insertAtLast(2);
    l1.insertAtLast(4);
    l1.insertAtLast(7);
    l1.insertAtLast(1);
    l1.print();
    cout<<endl<<endl;
    l1.removeDuplicates();
    cout<<"After Runing removeDuplicates"<<endl;
    l1.print();


    return 0;
}
