#include<stdio.h>
  int main(){
    int n;
    

     scanf("%d", &n);
     int arr[n];

     for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
     }

     int f[100000] = {0};

     for(int i = 0 ; i < n ; i++){
        f[arr[i]] = 1 ; 
     }

     for(int i = 0 ; i <= 10 ; i++){
        printf("%d %d\n",i, f[i]);
     }
  }