#include<stdio.h>
  int a[100000] ,b[10000];
 int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
      scanf("%d", &a[i]);
    }

    for(int i = n - 1 ; i >= 0 ; i--){
      b[i] = a[i];
      printf("%d", b[i]);
    }

    return 0;
 }