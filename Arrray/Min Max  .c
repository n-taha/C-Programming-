#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

     int min = INT_MAX , max = INT_MIN ;

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);

        
    if(min > arr[i]){
        min = arr[i];
    }
    if(max < arr[i]){
        max = arr[i];
    }

    }

  printf("Maximum = %d And Minimum : %d" , max , min);

}