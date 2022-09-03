//finding square root in logarithmic time(just int )
#include<iostream>
using namespace std;
int sqrt(int n )
{
    int s=1, e=n-1 ;
    int mid;
    long long int midSq;
    int ans=-1;
    while(e>=s)
    {
        mid=s+(e-s)/2;
        midSq=mid*mid;
        
        if(n>=midSq)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
       
    }
     return ans;
    

}
int main()
{
    int a ;
    cin>>a;
    cout<<sqrt(a)<<endl;

}