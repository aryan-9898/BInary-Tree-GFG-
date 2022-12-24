void TravLeft(Node *root,vector<int> &ans){
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        
        ans.push_back(root->data);
        
        if(root->left){
            TravLeft(root->left,ans);
        }
        else{
            TravLeft(root->right,ans);
        }
    }
    
    
    void TravLeaf(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        TravLeaf(root->left,ans);
        TravLeaf(root->right,ans);
    }
    
    void TravRight(Node *root,vector<int> &ans){
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
          TravRight(root->right,ans);
            
        }
        else{
            TravRight(root->left,ans);
            
        }
        ans.push_back(root->data);
        
    }

    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        TravLeft(root->left,ans);
        
        TravLeaf(root->left,ans);
        TravLeaf(root->right,ans);
        
        TravRight(root->right,ans);
        
        return ans;
    }
