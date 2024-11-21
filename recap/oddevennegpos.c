#include<stdio.h>
int main(){
    int n;
    printf("Enter An Integer: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        if(n > 0){
            printf("%d Is Positive Number\n" , n);
        }else{
            printf("%d Is A Negative Number\n", n);
        }

        printf("%d Is A Even Number\n" , n);
    }else{
        if(n > 0){
            printf("%d Is A Positive Number\n",n);
        }else{
            printf("%d Is A Negative Number\n",n);
        }

        printf("%d Is A Odd Number\n", n);
    }
}