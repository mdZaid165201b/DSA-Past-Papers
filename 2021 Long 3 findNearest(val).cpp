int size(Node *root){
        if(root == NULL){
            return 0;
        }
        else{
            return 1 + size(root->getLeft()) + size(root->getRight());
        }
    }

int findNearest(int val){
        int count = size(root); // Size method is used to count number of nodes in BST
        int *arr = new int(count);
        utilFunc(root,arr,0);
    
        int leastDiff = count;
        int index = count;
        for(int i = 0; i < count; i++){
           if(arr[i] > val){
               int temp = arr[i] - val;
               if(leastDiff > temp){
                   leastDiff = temp;
                   index = i;
               }
           } 
           else{
               int temp = val - arr[i];
               if(leastDiff > temp){
                   leastDiff = temp;
                   index = i;
               }
           }
        }
        // cout<<index;
        // cout<<leastDiff;
        return arr[index];
    }
    int utilFunc(Node *root ,int arr[],int index){
        if(root == NULL){ return index; }
        int in = utilFunc(root->getLeft(),arr,index + 1);
        arr[index] = root->getData();
        return utilFunc(root->getRight(),arr,in);
    }

int main()
{
    BST bst;
    bst.insert(9);
    bst.insert(4);
    bst.insert(17);
    bst.insert(3);
    bst.insert(6);                                                                                                                                
    bst.insert(5);
    bst.insert(7);
    bst.insert(22);
    bst.insert(20);
    bst.inOrder();
    cout<<"Nearest :"<<bst.findNearest(19);
    
    return 0;
}
