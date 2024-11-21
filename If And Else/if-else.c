#include<stdio.h>
 int main(){

  int price = 50;

  if (price < 60)
  {
   printf("Buy 4 Eggs\n");
   printf("Back TK: %d" , 60 - price);

  } else{
    printf("Buy Two Eggs");
  }
  
  return 0;

 }