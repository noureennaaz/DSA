vector<int> levelOrder(Node* node)
    {
    
      vector<int> traversal;
      Node* top;
      
      queue<Node*> que;
      
      que.push(node);
      
      while(!que.empty())
      {
          top=que.front();
          que.pop();
          traversal.push_back(top->data);
          
          
          
          if(top->left!=NULL)
             que.push(top->left);
          if(top->right!=NULL)
             que.push(top->right);
             
          
      }
      return traversal;
      
    }
