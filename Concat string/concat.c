#include<stdio.h>
#include<string.h>
  int main(){
    char a[300] = "Hello ";
    char b[300] = "World!";

    int length_1 = strlen(a);
    int length_2 = strlen(b);

    int length = length_1 + length_2;


    for(int i = length_1 , j = 0; i < length ; i++ , j++){
        a[i] += b[j];
    }

    a[length] = '\0';


    // strcat(a , b);  // build in function to concat string;

    printf("%s", a);
  }