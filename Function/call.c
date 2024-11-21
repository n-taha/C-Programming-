#include<stdio.h>
  
  int add(int a , int b){
  int result = a + b;

  return result;
  }

  int main(){

    int result = add(10 , 20);

    printf("%d\n", result);

    printf("%d\n", add(20 , 40));
    
  }