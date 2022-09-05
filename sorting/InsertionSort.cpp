void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    int temp,i=1,j;
    while(i<n)
    {
        
        temp=arr[i];
        j=i-1;
        while( j>=0 )
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
                
            }
            else{
                break;
            }
          j--;
        }
        arr[j+1]=temp;
        i++;
    }
}