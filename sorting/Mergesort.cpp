#include<iostream>
using namespace std; 

void merge(int *arr , int l , int r , int m)
{
    int l1= m-l+1;
    int l2= r-m;
    int *temp= new int[l1];
    int *temp2= new int[l2];
    int k=l;
    for(int i=0 ; i<l1 ; i++)
    {
        temp[i]=arr[k++];
    }
    k=m+1;
    for(int i=0 ; i<l2 ; i++)
    {
        temp2[i]=arr[k++];
    }
    int i=0 , j=0;
    k=l;
    while(i<l1 && j<l2)
    {
        if(temp[i]>temp2[j])
        {
            arr[k++]=temp2[j++];
        }
        else
            arr[k++]=temp[i++];
    }
    while(i<l1)
    {
        arr[k++]=temp[i++];
    }
    while(j<l2)
    {
        arr[k++]=temp2[j++];
    }
    delete[] temp;
    delete[] temp2;
}
void mergesort(int *arr, int l ,int r)
{
    if(l>=r)
       return;
    int mid=l+(r-l)/2;
    mergesort(arr , l , mid);
    mergesort(arr , mid+1, r);
    merge(arr , l , r ,mid);
}
int main()
{
    int n , k;
    cout<<"Enter size :"<<endl;
    cin>>n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    mergesort(arr , 0, n-1 );
    for(int i=0 ; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
