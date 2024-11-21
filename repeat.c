#include<stdio.h>
  int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    int arr[10000];

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        arr[a[i]]++;
    }

      int count = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[a[i]] == 1){
            count++;
        }
    }

    printf("%d", count);
  }
