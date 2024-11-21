#include<stdio.h>
 int main(){
    int n , m , x;
    scanf("%d %d %d", &n , &m , &x);
    int arr[n][m];

  

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d", &arr[i][j]);
        }
    }


   int num[x];

   for(int i = 0; i < x ; i++){
    scanf("%d", &num[i]);

   }
   
   
   for(int s = 0 ; s < x ; s++){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == num[s]){
                count++;
            }
        }
    }

    printf("%d\n", count);
   }


  
   }

   
 


