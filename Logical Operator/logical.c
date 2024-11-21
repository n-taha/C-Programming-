#include<stdio.h>
#include<stdbool.h>

 int main(){
    
    int a = 1 , b = 8;
    // bool condition = (a > b) && (a < b) && (a != b); // 0 false
    // bool flag = !((a != b) && (a > b) && (a < b)); // 1 true
    // bool conflag = (a = b) || (a > b); // 1 true
    bool real = (a = b) || (a < b); // 0 false
    printf("%d" , real);
  
  return 0;
 }