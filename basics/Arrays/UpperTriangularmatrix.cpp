#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[20][20];

    
    //Input upper triangular matrix 

    for(int i=0 ;i<n ;i++){

       for(int j=i ;j<n ; j++){

        cout<<"a["<<i <<"]["<<j<<"] = ";
        cin>>a[i][j];

       }

    }

    //printing the same   
    for(int i=0,j ;i<n ;i++){

       j=0;
       while(j<i){
           cout<<0<<" ";
           j++;
       }
       
       for( ;j<n ; j++){
        cout<<a[i][j]<<" ";
       }
       
       cout<<endl;
    }


}
