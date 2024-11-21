#include<stdio.h>
  int main(){
    char str[100];

    // scanf("%[^\n]s" ,str);  //sentence input - 1
    
    fgets(str, sizeof(str) , stdin);  // sentence input - 2

    // puts(str);  // print system - 1

    fputs(str, stdout);  // print system - 3 (Standard way);

    // printf("%s", str);  // print system - 2

  }