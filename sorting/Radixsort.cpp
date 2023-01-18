#include<iostream>
using namespace std;
void countSort(int arr[], int n , int i)
{
    int tempindex[10]={0};
    int temparr[n]={0};
    int index;

    //creating the index array
    for(int j=0 ; j<n ; j++)
    {
        index=(arr[j]/i)%10;
        tempindex[index]++;
    }
    for(int j=1 ; j<10 ;j++)
    {
        tempindex[j]+=tempindex[j-1];
    }

    //placing the elements in order
    for(int j=n-1 ; j>=0 ; j--)
    {
        index=(arr[j]/i)%10;
        temparr[--tempindex[index]]=arr[j];
    }

    //copying to the given array
    for(int j=0 ; j<n ; j++)
    {
        arr[j]=temparr[j];
    }
}
void Radixsort(int arr[], int n)
{
    int max=arr[0];
    for ( int i = 1; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=1 ; max/i >0 ;i*=10)
    {
        countSort(arr , n , i);
    }
}
int main(){
    int arr[20];
    int n;
    cin>>n;
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }
    Radixsort(arr, n);

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
