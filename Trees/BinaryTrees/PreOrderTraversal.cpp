void preord(Node *root, vector<int> &ans)
{
    if(root==NULL)
     return;
  
 
  ans.push_back(root->data);
  preord(root->left, ans);
  preord(root->right, ans);
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  preord(root , ans);
  return ans;
}
