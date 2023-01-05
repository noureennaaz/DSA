#include<iostream>
using namespace std;
int partition(int *arr , int low , int high)
{
    int index=low;
    for(int i=low; i<high ;i++)
    {
        if(arr[i]<arr[high])
        {
            swap(arr[index++],arr[i]);
        }
    }
    swap(arr[index], arr[high]);
    return index;

}
void Quicksort(int *arr, int low , int high)
{ 
    if(low<high)
    {
        int pivot=partition(arr,low  , high);
        Quicksort(arr, low , pivot-1);
        Quicksort(arr, pivot+1, high); 
    }

}
int main()
{
    int n, k;
    cout<<"Enter size :"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
        
    }
    Quicksort(arr,0, n-1);
    for(int i=0 ; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
