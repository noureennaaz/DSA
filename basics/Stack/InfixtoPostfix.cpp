class Solution {
  public:
    
    int prec(char k)
    {
        
        if(k=='^')
         return 3;
        else if(k=='*' || k=='/')
         return 2;
        else if(k=='+' || k=='-')
         return 1;
    }
    
    bool ischar(char d)
    {
        return (d>='A' && d<='Z')|| (d>='a' && d<='z');
    }
    
    
    string infixToPostfix(string s) {
        
        string ans="";
        char stack[s.length()]="";
        int top=-1;
        for(int i=0 ; i<s.length() ;i++)
        {
            if(ischar(s[i]))
            {
                ans+=s[i];
            }
            else if(s[i]=='(')
            {
                stack[++top]=s[i];
            }
            
            else if(s[i]==')')
            {
                while(stack[top]!='('  && top!=-1)
                {
                    ans+=stack[top--];
                }
                if(top>-1)
                 top--;
            }
            else{
                while(top>=0 && prec(stack[top])>=prec(s[i]))
                {
                    if(stack[top]=='(')
                      break;
                    ans+=stack[top--];
                }
                stack[++top]=s[i];
            }
            
        }
        while(top>-1)
        {
            ans+=stack[top--];
        }
        
        return ans;
        
    }
};
