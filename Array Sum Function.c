#include<stdio.h>

  int a[100000];

  int sum(int i , int n){
    if(i == n){
        return 0;
    }

    return a[i] + sum(i + 1 , n);
  }

  int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i > n ; i++){
        scanf("%d", &a[i]);

    }

    int rtrn = sum(0 , n);

    printf("%d", rtrn);
  }