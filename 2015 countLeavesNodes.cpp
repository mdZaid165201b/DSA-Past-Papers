
// Not the best code
int countLeaves(Node *root){
        if(root == NULL){
            return 1;
        }
        int temp = countLeaves(root->getLeft());
        cout<<"temp :"<<temp<<endl;
        return 1+countLeaves(root->getRight());
 }
