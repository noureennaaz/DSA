//remove entered element 
#include<stdio.h>
int main(){
    int a[8]={ 10, 5, 0, 88, 9, 0, 7 ,9};
    int k,count=0;
    
    printf("Enter the element to remove :" );
    scanf("%d",&k );
    
    for(int i=0 ;i<8 ;i++){
        if(a[i]==k)
         count++;

        else if(count>0){
            a[i-count]=a[i];

        }
    }
    for(int i=0; i<8-count ;i++){
        printf("%d " ,a[i]);
    }

}
