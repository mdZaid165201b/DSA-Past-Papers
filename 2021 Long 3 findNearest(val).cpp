int findNearest(int val){
        int count = size(root);
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
        int in = utilFunc(root->getLeft(),arr,index+1);
        arr[index] = root->getData();
        return utilFunc(root->getRight(),arr,in);
    }
