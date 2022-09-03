#include<iostream>
using namespace std;
int sqrtInt(int n)
{
    int s =1 , e=n-1 , mid ;

    long long  midSq;

    int ans;

    while(s<=e)
    {
        mid= s + (e-s)/2;
        midSq= mid*mid;

         if( midSq<=n)
         {
            s= mid+1;
            ans= mid;
         }
         else
         {
            e= mid-1;
         }
    }
    return ans; 
}

float precise(float n , int sq , int digit)
{
    double factor=1, tempSol, sqfloat;
    sqfloat=sq;
    tempSol=sq;
    
    for(int i=0 ; i < digit ; i++)
    {
        factor/=10;
        for( sqfloat=tempSol ; sqfloat*sqfloat < n ; sqfloat+=factor )
        {
            //cout<<"sqfoat: "<<sqfloat;
            tempSol= sqfloat;
        
        }
       
    }
    return tempSol;
     

}


int main()
{
    float n;
    int sq ;
    cin>>n;
    sq=sqrtInt(n);
    cout<<sq<<endl;
    cout<<precise( n , sq, 4);
}