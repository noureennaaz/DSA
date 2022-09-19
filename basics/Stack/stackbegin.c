#include<stdio.h>
int s,top=-1, a[20];

int isempty()
{
    if(top==-1)
        return 1 ;
    else
        return 0;
}

int isfull()
{
    if(top<s)
       return 0;
    
    else
       return 1;

}

void push()
{
    if(isfull()!=1){
        
        //printf("\nEnter Element :\n");
        scanf("%d",&a[++top]);
        
    }
    else
       printf("Overflow !\n");
}

void pop(){
    if(isempty()==0)
        printf("\n%d removed ",a[top--]);
        
    else
    printf("\nAlready Empty !");

}
void display(){
    printf("\nDisplaying:\n");
    for(int i=top ; i>=0 ; i--){
        printf("%d ",a[i]);
    }
}
int main(){

    printf("Enter 'number of  elements' to insert : ");
    scanf("%d",&s);
   printf("Enter %d elements :\n",s);
    for(int i=0 ; i<s ;i++){
        push();
    }
    

    display();

    pop();

    display();
    pop();
    pop();
    display();

}
