void InOrder(Node* root , vector<int> &ans)
    {
        if (root == NULL)  
        return;  
        InOrder(root->left, ans);  
        ans.push_back(root->data);  
        InOrder(root->right, ans);
    }
    vector<int> inOrder(Node* root) {
        
        
        vector<int> ans;
        InOrder(root , ans);
        
        return ans;
    }
