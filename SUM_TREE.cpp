class Solution
{
    public:
    pair<bool,int> isSumTreeFast(Node* root){
        //base case
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        
        //exclude leaf node
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> leftAns=isSumTreeFast(root->left);
        pair<bool,int> rightAns=isSumTreeFast(root->right);
        
        bool isSumLeft=leftAns.first;
        bool isSumRight=rightAns.first;
        bool condition=root->data==(leftAns.second+rightAns.second);
        
        pair<bool,int> ans;
        
        if(isSumLeft && isSumRight && condition){
            ans.first=true;
            ans.second=root->data+leftAns.second+rightAns.second;
        }else{
            ans.first=false;
        }
        
        return ans;
        
        
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }
};
