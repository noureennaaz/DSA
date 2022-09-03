                        
#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n ;
    int r=1, c, space;

    while (r<=n){
        c=1;
        
        while (c<=n-r+1){
            cout<<" "<<c<< " " ;
            c++;
        }

        c=1;
        while(c<=2*(r-1)){
            cout<<" * ";
            c++;
        }

        c=1;
        while(c<=n-r+1)
        {
            cout<<" "<<n-r-c+2<<" ";
            c++;
        }
        cout<<endl;
        r++;
    }

    

}
