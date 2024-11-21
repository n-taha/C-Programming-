#include<stdio.h>
int main(){
    int i;
    int sum = 1;

    for(i = 0 ; i <= 10 ; i++){
        
        printf("%d + %d = " , sum , i);
        sum = sum + i;

        printf("%d\n" , sum);
    }

    printf("Result = %d" , sum);
    
}