//to reverse any number  + within int range
#include<iostream>
#include<limits.h>
using namespace std ;
int main(){
    int a,r;
    cin>>a;
    r=0;
    while(a){
        int z ;
        z=a%10;
        if(r>INT_MAX/10 || r< INT_MIN/10){
            cout<< 0;
            goto l1;

        }
         
        r=r*10 +z;
        a/=10;
    }
    cout<<r<<endl;
    l1:
 return 0;
}