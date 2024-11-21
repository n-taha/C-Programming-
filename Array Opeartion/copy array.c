#include<stdio.h>
 int a[10000000] , b[10000000];

 int main(){
    int num1 , num2;
    scanf("%d", &num1);
    
       for(int i = 0 ; i < num1 ; i++){
        scanf("%d", &a[i]);
       }

       num2 = num1;

       for(int i = 0 ; i < num2 ; i++){
          b[i] = a[i];
          printf("%d ",b[i]);
       }
       return 0;
 }