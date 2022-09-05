void bubbleSort(vector<int>& arr, int n)
{   
    bool swapped ;
    
    for(int i=0 ; i<n ; i++){
      
    for(int j=0 ; j<n-1 ; j++){
        
        if(arr[j]>arr[j+1]){

        swap(arr[j],arr[j+1]);
        swapped=true ;
        }
         
    }
    if(swapped==0 )
        break ;
    }
}
