int height(struct Node* node){
        // code here 
        if(node==NULL)
            return 0;
        
        else
        {
            return max(height(node->left), height(node->right))+1;
        }
    }
