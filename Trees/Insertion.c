Node* insert(Node* root, int Key) {
   
    // find(Node* root , Key);
    Node* temp, * parent;
    bool found=0;
    temp=root;
    while(temp != NULL)
    {
        parent =temp;
        if(temp->data==Key)
            return root;
        else if(temp->data> Key )
            temp=temp->left;
        else
            temp=temp->right;
    }
    
    temp=(Node*)malloc(sizeof(struct Node));
    temp->data=Key;
    temp->left=NULL;
    temp->right=NULL;
    if(parent->data < Key)
        parent->right=temp;
    else
        parent->left=temp;
  
    return root;
}
