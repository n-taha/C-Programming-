#include<stdio.h>

 void func(int n , int x){

  if(n == 0){
    return;
  }

//   printf("%d\n", n);  // Easy Way

//   func(n - 1 , x);

  func(n + 1 , x);

// Hard Way

  printf("%d", n);

 }

 int main(){

  func(10 , 1);

 }