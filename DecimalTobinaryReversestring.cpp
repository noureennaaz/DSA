//program to convert decimal to binary using a string
//better complexity O(log n )

#include<iostream>
#include<math.h>

using namespace std ; 
int main(){

    int a;
    

    cout<<"Enter a number : "<<endl;
    cin>>a;
    
    string binary; 
    
    
    while( a ){


        if(a & 1 == 1){
            binary+='1';
        }
        else{
            binary+='0';
        }
        a>>=1;
        
        
    }
    //printing in reverse 

    for(int i=binary.size()-1  ; i>=0  ; i--){
        cout<<binary[i];
    }
    
    
}