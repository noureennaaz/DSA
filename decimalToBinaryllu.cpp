//binary to decimal using long long int data type   
//logaritmic complexity 
#include<iostream>
#include<math.h>
using namespace std ;

int main(){

    unsigned long long  binary =0 , factor ;
    int n ;
    cout<<"ENter a number : "<<endl;
    cin>>n ;
    
    int i=0 ;
    while( n != 0 ){

        int bit= n%2 ;
        
        factor= pow( 10 , i );
        
        if(factor%10 !=0 ){
            factor+=1 ;
        }
        
        binary += bit*factor ;

        i++;
        n/=2;
        
    }

    cout<<binary <<endl;
}