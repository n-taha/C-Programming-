#include<stdio.h>
int main(){
    int marks;
    printf("Enter Your Mark: ");
    scanf("%d" , &marks);



    if(marks >= 80 && marks <= 100){
      
           if (marks >= 90 && marks <= 100){
        printf("You Have got Scollership\n");
    }
      printf("You Got A+\n");
    }
    else if(marks >= 70 && marks < 80){
        printf("You Got A\n");
    }

    else if(marks >= 60 && marks < 70){
        printf("You Got A-\n");
    }

    else if(marks >= 50 && marks < 60){
        printf("You Got B\n");
    }
    else if(marks >= 40 && marks < 50){
        printf("You Got C\n");
    }
    else if(marks >= 33 && marks < 40){
        printf("You Got D\n");
    }
    if (marks >= 33 && marks <= 100 )
    {
        printf("You Have Passed\n");
    }
    
    else if(marks == 0 && marks <= 32){
        printf("Fail ! Do You Best Next Time");
    }
    else{
        printf("Invalid Marks");
    }
}