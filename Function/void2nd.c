#include<stdio.h>

  void add(){
    int a , b;
    scanf("%d %d", &a , &b);

    printf("Function Called\n");

    int sum = a + b;

    printf("%d", sum);
  }

void greetings(){
    printf("Hello Everyone ! Good Morning .");
}
  int main(){
    greetings();

    add();

    

  }