//deletion code
#include<stdio.h>
int main(){
    int n,d;
    //Input 
    printf("Enter size of array :");
    scanf("%d",&n);
    
    int a[n];

    printf("Enter %d Elements :\n",n);

    for( int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

   //to delete :
    printf("Enter the element to delete :");
    scanf("%d",&d);

    //Deletion
    int count=0 ,i;
    
    for( i=0 ;i<n-count ;i++){
        if(a[i]==d){
            count=1;
        }
        a[i]=a[i+count];
       // printf("%d ",a[i]);
    }
    if(count==1)
        printf("%d deleted  \n",d);
    else
        printf("%d Element not present",d);

    for(int i=0 ;i< n-count ;i++){
        printf("%d ",a[i]);
    }

}
