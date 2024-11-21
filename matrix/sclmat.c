#include<stdio.h>
  int main(){
    int n;
      scanf("%d", &n);
       int m[n][n];
      
      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d", &m[i][j]);
        }
      }
      
      int flag = 1;

      for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j){
                if(m[i][j] != m[0][0]){
                   flag = 0;
                   break;
                }
                else{
                    if(m[i][j] != 0){
                        flag = 0;
                        break;
                    }
                }
            }
        }
      }

      if(flag == 1){
          printf("Scaler");
      }else{
        printf("Not Scaler");
      }
  }