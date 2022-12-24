vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	
    	if(root==NULL){
    	    return result;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	bool LeftToRight=true;
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int> ans(size);
    	    
    	    for(int i=0;i<size;i++){
    	        Node* frontnode=q.front();
    	        q.pop();
    	        
    	        int index=LeftToRight ? i : size-1-i;
    	        ans[index]=frontnode->data;
    	        
    	        if(frontnode->left){
    	            q.push(frontnode->left);
    	        }
    	        
    	        if(frontnode->right){
    	            q.push(frontnode->right);
    	        }
    	    }
    	    
    	    LeftToRight=!LeftToRight;
    	    
    	    for(auto i:ans){
    	        result.push_back(i);
    	    }
    	    
    	}
    	return result;
    }
