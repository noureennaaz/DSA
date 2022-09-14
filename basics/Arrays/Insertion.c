//to insert an element at specific index
#include<stdio.h>

int main(){

    int arr[11]={1,2,3,4,5,6,7,8,9,10};

    int k,index ;

    printf("Enter the element to insert :");
    scanf("%d",&k);

    printf("At index :");
    scanf("%d",&index);

    for(int i=10; i>index-1;i--){

        arr[i]=arr[i-1];
    }

    arr[index]=k;
    
    for(int i=0 ; i<11 ; i++){
        printf("%d ",arr[i]);
    }

}
