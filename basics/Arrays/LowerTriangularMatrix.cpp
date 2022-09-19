#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[20][20];

    
    //Input lower triangular matrix 
    for(int i=0 ;i<n ;i++){
      
       for(int j=0 ;j<=i ; j++){
         
        cout<<"a["<<i <<"]["<<j<<"] = ";
         
        cin>>a[i][j];
       }
    }
  
    //printing the same   
    for(int i=0 ;i<n ;i++){
      
       int j;
       for(j=0 ;j<=i ; j++){
         cout<<a[i][j]<<" ";
       }
      
       while(j<n){
         cout<<0<<" ";
         j++;
       }
       cout<<endl;
    }
}
