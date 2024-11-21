#include<stdio.h>

 int f[100005];
  int main(){
    int n , m ;
    scanf("%d %d", &n , &m);
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
       
       f[arr[i]] += 1;
    }

    for(int i = 1 ; i <= m ; i++){
        printf("%d\n" , f[i]);
    }

    
  }