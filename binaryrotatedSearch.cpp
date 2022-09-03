//searching in rotated sorted array
//it includes 
#include<iostream >
using namespace std ;

int find_pivot(int a[] , int n )
{
    int start=0, end=n-1;
    int mid;
    
    while(start<end)
    {
        mid = start +(end-start )/2 ;

        if(a[mid]>=a[0])
        {
            start= mid+ 1;
        }
        else
        {
            end=mid;

        }
    }
    //returning pivot element;
    return start;

}

int binary_search(int a[] , int start , int end , int key)
{   
    int mid;

    while(start<=end )
    {
        mid= start+(end -start)/2;

        if(a[mid]==key){
            return mid;
        }
        
        else if(a[mid]>=key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        

    }
    return -1;
}

int find_num(int a[] , int n , int key )
{
    int pivot_index= find_pivot(a, n);
    int start , end;
    //2nd line  me  hone ka check
    if(key <= a[n-1] && key >= a[pivot_index])
    {
        start=pivot_index;
        end=n-1;
    }
    else
    {
        start=0;
        end= pivot_index-1;
    }
    
    int index=binary_search(a, start, end, key);
    //returning the index of search;
    return index;


}
int main ()
{

    int a[50];
    int n, key;
    cout<<"Enter array size : "<<endl;
    cin>>n;
    //int a[6]= {4,5,7,1,2 , 3};
    for(int i=0; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"to find:"<<endl;
    cin>>key;

    cout<< "ELEMENT "<<key<<" FOUND ON INDEX :"<<find_num(a,n, key) <<endl;

}