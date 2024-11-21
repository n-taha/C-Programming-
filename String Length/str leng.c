#include<stdio.h>
#include<string.h>
  int main(){
    char str[1000] = {'a' , 'b' , 'c', 'd'};

    // int length = 0;

//    for(int i = 0 ; str[i] != '\0' ; i++){
//     length++;
//    }       // loop way to find string length;

  
   int count = strlen(str);

    // printf("%d", length);
    printf("%d", count);

    return 0;
  }