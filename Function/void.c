#include<stdio.h>

void add(int a , int b){   // This Is The No Return Policy 
    printf("Function Called\n");
    // int sum = a + b;

    // printf("%d", sum);


}

  void AlCheck(char c){
    
    if('a' <= c && c <= 'z'){
        printf("lower\n");
    }else{
      printf("Upper\n");
    }

  }

int main(){

    // int a , b;
  
//   scanf("%d %d", &a , &b);

//   add(a , b);

 AlCheck('c');
 AlCheck('F');

}