#include<stdio.h>
int main(){

    int  n, i =1,copy ,count  ,r , temp;
    
    printf("ENter the number ");
    scanf("%d",&n);
    copy=n;
    count=0;
   
    while(n>0){
        r=n%10;
      
        if(r == 0 ){
            count++;
        }
        n/=10;
        
    }
    if(count!=0)
       printf("Occurence of 0 : %d\n",count);

    n=copy ;

    while(n>0){

        r=n%10;
        if(r!=0){
            copy=n;
            count=0;
            i=1;
            while(copy>0){
                 
                 if(copy%10 == r ){
                     count++;
                     n-=i*r;
                    }
                    i*=10;
                    copy/=10;

        }
        
        printf("Occurence of %d : %d\n",r ,count );
        
        
        }
        n/=10;
        
    }

}
