#include<iostream>
using namespace std;

//returns the correct valueof pivot 
int partition(int arr[],int l, int h)
{
    int j=l ,i=j-1,pivot=h,temp;

    for( ; j < h ; j++)
    {
        if(arr[j]<arr[pivot])
        {
            temp=arr[j];
            arr[j]=arr[++i];
            arr[i]=temp;
        }
    }
    temp=arr[j];
    arr[j]=arr[++i];
    arr[i]=temp;
    return i;
}

void QS(int arr[] ,int low ,int high)
{
    int k;
    if(high>low)
    {
        k=partition(arr,low,high);
        QS(arr,k+1,high);
        QS(arr,low,k-1);
    }
}

int main()
{
    int n;
    cout<<"Enter size :";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];

    }
    QS(arr,0,n);
    cout<<"Final Array: "<<endl;
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }

}
