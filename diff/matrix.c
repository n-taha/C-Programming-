#include<stdio.h>
#include<math.h>
  int main(){
    int n;

    scanf("%d", &n);

    int m[n][n];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
          scanf("%d", &m[i][j]);
        }
    }

      
      int pri_diagonal = 0 , sec_diagonal = 0;

      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j){
                pri_diagonal = pri_diagonal + m[i][j];
            }

            if(i + j == n - 1){
                sec_diagonal = sec_diagonal + m[i][j];
            }
        }
      }

      int difference = abs(pri_diagonal - sec_diagonal);

      printf("%d", difference);

      return 0;

  }