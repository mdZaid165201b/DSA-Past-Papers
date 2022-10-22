
// Not the best code
int countLeaves(Node *root){
        if(root == NULL){
            return 1;
        }
        int temp = countLeaves(root->getLeft());
        cout<<"temp :"<<temp<<endl;
        return 1+countLeaves(root->getRight());
 }

// More Understandable code
int countLeaves(Node *root){
        if(root == NULL){ return 0; }
        if(root->getLeft() == NULL && root->getRight() == NULL){ return 1; }
        
        else{
            return countLeaves(root->getLeft()) + countLeaves(root->getRight());
        }
 }
