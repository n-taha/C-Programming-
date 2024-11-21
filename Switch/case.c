#include<stdio.h>
 int main(){
    int day;

    printf("Enter The Day Number : ");
     scanf("%d" , &day);

     switch(day){
        case 1:
           printf("This Is Saturday");
           break;

        case 2:
           printf("This Is Sunday");
           break;

        case 3:
           printf("This Is Monday");
           break;

        case 4:
           printf("This Is Tuesday");
           break;

        case 5:
           printf("This Is Wednesday");
           break;

        case 6:
           printf("This Is Thursday");
           break;

        case 7:
           printf("This Is Friday");
           break;
        default:
           printf("Wrong Day");
                           
     }

  return 0;
 }