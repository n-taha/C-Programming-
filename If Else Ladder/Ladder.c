#include<stdio.h>
 int main(){
    int a;
    scanf("%d",&a);

    if (a < 5)
    {
        printf("a is less then 5\n");
    }
    else if (a < 10)
    {
        printf("a is less then 10\n");
    }
    
    else if (a < 20)
    {
        printf("a is less then 20\n");
    } 
    
    else{
        printf("You entered greater then 20\n");
    }


 return 0;
    
 }