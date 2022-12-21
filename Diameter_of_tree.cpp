public:
    int height(Node* root){
        if(root){
            return max(height(root->left),height(root->right))+1;
        }
        else{
            return 0;
        }
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int ans;
        if(root){
            int op1=diameter(root->left);
            int op2=diameter(root->right);
            int op3=height(root->left)+1+height(root->right);
            
            ans=max(op1,max(op2,op3));
            return ans;
        }
        else{
            return 0;
        }
        
    }
