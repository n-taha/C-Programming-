#include<stdio.h>
#include<string.h>
 int main(){
    char a[20];
    char b[20] = "abcd fgt";

    int length = strlen(b);

    // for(int i = 0 ; i < length ; i++){
    //     a[i] = b[i];
    // }

    // a[length] = '\0';

    strcpy(a , b);

    printf("%s\n %s\n" , a , b);

    

 }