#include<stdio.h>
 int main(){
    char str[20];
    int n;
    scanf("%d", &n);

    scanf("%s", str);
    int  sum = 0;

    for(int i = 0 ; i < n  ; i++){
     int digit = str[i] - '0';
     sum = sum * 10 + digit;   
    }

    printf("%d", sum);
 }




