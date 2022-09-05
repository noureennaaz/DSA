#include<bits/stdc++.h>
using namespace std;

int last(int arr[], int n , int x ){
    int start=0 ,end =n-1, mid,ans=-1 ;

        while(start<=end){
        
        mid=start+(end-start)/2 ;

        if(arr[mid]==x){
               ans= mid ;
            start=mid+1;
        }
        
        else if(arr[mid]>x)
            end=mid-1 ;
            
        else 
            start=mid+1;
        
        
    }
    return ans;

}

int first(int arr[], int n , int x ){

    int start=0 ,end =n-1, mid,ans=-1 ;

    while(start<=end){
        
        mid=start+(end-start)/2 ;

        if(arr[mid]==x){
              ans=mid;
           end=mid-1;
            
        }
        
        else if(arr[mid]>x)
            end=mid-1 ;
            
        else 
            start=mid+1;
        
        
    }
    return ans;
}

vector<int> find(int arr[], int n , int x )
{
    
    vector<int> a={first(arr ,n, x) , last(arr , n, x)};
    
     return a;
    }
   
    


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends