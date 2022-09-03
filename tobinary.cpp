//to decial ;
#include<iostream>
#include<math.h>
using namespace std ;

int main(){

    unsigned long long  a ;
    int decimal=0  , i =0  ;
    cin>>a;
    
    while( a ){
        int last_bit= a%10 ;

        if( last_bit ){
            decimal+=pow(2 , i );
        }

        a/=10;
        i++;

    }
    
    cout<<decimal<<endl;
}
