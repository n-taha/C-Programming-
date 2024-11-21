#include<stdio.h>

  void func(int x[] , int n){
     for(int i = 0 ; i < n ; i++){
        scanf("%d", &x[i]);
     }

     for(int i = 0 ; i < n ; i++){
        printf("%d ", x[i]);
     }
  }
int main() {

    int n;

    scanf("%d", &n);

    int a[n];


    func(a , n);

}