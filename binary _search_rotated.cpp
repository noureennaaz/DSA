//searching in rotated sorted array
//it includes 
#include<iostream >
using namespce std ;

int find_pivot(int a[] , int n )
{
    int start=0, end=n-1;
    int mid;
    
    while(end<start)
    {
        mid = start +(end-start )/2 ;

        if(a[mid]>a[0])
        {
            start= mid+ 1;
        }
        else
        {
            end=mid;

        }
    }
    //returning pivot element;
    return a[end];

}

int find_num(int a[] , int n , int key )
{
    int pivot_index= find_pivot(a, n);
    int mid, start , end;
    //2nd line  me nhi hone ka check ka check
    if(key > a[end])
    {
        start=0;
        end=pivot_index-1;
    }
    else
    {
        start=pivot_index;
        end=n-1;
    }
    
    while(start>=end )
    {
        mid= start+(end -start) /2;
        
        if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        

    }
    //returning the index of search;
    if(a[start]==key)
    return mid;
    
    else
    return -1;


}
int main ()
{

    int a[50];
    cout<<"Enter array size : "<<endl;
    cin>>n;
    //int a[6]= {4,5,7,1,2 , 3};
    for(int i=0; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"to find:"<<endl;
    cin>>key;

    find_num(a,n, key);

}