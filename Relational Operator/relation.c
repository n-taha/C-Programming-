#include<stdio.h>
#include<stdbool.h>

 int main()
 {
    int a = 5 , b = 4;

    bool flag = a == b;
    bool flag2 = a >= b;
    bool flag3 = a > b;
    bool flag4 = a < b;
    bool flag5 = a <= b;
    bool flag6 = a != b;

    printf("Flag = %d\n" , flag);
     printf("Flag 2 = %d\n" , flag2);
      printf("Flag 3 = %d\n" , flag3);
       printf("Flag 4 = %d\n" , flag4);
        printf("Flag 5 = %d\n" , flag5);
         printf("Flag 6 = %d\n" , flag6);
 }