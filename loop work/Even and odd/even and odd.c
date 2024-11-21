#include<stdio.h>
int main(){
   for(int i = 1 ; i <= 20 ; i++){
   if(i % 2 == 0){
    printf("%d Is Even Number\n" , i);
   }
   else{
    printf("%d Is Odd Number\n" , i);
   }
    
   }
    return 0;
}