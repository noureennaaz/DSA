#include<iostream>
using namespace std;

void heapify(int* arr, int n , int i)
{
    int max=i;
    int right=2*i+2;
    int left=2*i+1;

    if(left<n && arr[left]>arr[max])
        max=left;
    if(right<n && arr[right]>arr[max])
        max=right;
    
    if(max!=i)
    {
        swap(arr[max], arr[i]);
        heapify(arr, n ,max);
    }

}



void heapsort(int* arr , int n)
{
    //making a maxheap
    for(int i=n/2-1 ; i>=0 ; i--)
       heapify(arr, n , i);

    //sorting the heap
    for(int size=n-1 ; size>=0 ; size--)
    {
        
        swap(arr[0],arr[size]);
        heapify(arr, size , 0);

    }
}



int main()
{
    int n;
    int arr[50];
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

}
