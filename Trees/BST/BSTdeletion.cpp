// Function to delete a node from BST.
Node *deleteNode(Node *root, int X) {
    
    
    
    if(!root) return NULL;
    
    int val  = root->data;
    
    if(val<X)
    {
        root->left = deleteNode(root->left,X);
    }
    else if(val>X)
    {
        root->right = deleteNode(root->right,X);
    }
    else{
        
        
        //is a leaf node
        if(!root->left&&!root->right)
        {
            root = NULL;
            delete(root);
            return NULL;
        }
        
        //has 1 child
        else if(!root->left||!root->right)
        {
            if(root->left) return root->left;
            if(root->right) return root->right;
        }
        
        
        // has 2 childs
        else 
        {
        
            Node* prev = root;   
            Node * trav = root->right;
            while(trav->left)
            {   prev = trav;
                trav=trav->left;
            }
            root->data = trav->data;
           if(prev!=root) prev->left =deleteNode(trav,trav->data);
           else prev->right = deleteNode(trav,trav->data);
           return root;
         
        }
    }
    return root;

}
