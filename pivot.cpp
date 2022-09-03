//find pivot in an array 
#include<iostream>
using namespace std;
int find_pivot(int a[4]  , int n){
    int mid , start , end ;
    start=0;
    end=n-1;
    

    while(start<end)
    {
        mid= start+ (end-start )/2;
        if(a[mid ]>=a[0])
        {
            start = mid+1 ;
        }
        else
            end= mid;

    }
    cout<<a[start]<<endl;
    ///s and e both give sthe same pivot elements in array
    return end;
}

int main()
{
    int a[4]={2,3 ,4 , 1 };

    
    cout<<"Pivot element in the given array is : ";
    //cout<<
    find_pivot(a,4);
    


}