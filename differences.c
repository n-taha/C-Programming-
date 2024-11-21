#include<stdio.h>
 int main(){
    int x , y;
    scanf("%d %d", &x , &y);

    int temp = y;

    if(x < y){
       y = x;
       x = temp;
    }

    int dif = x - y;

    printf("%d", dif);
 }