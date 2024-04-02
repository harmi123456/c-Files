#include<stdio.h>
 main(){
    int arr[3][3]; 
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            printf("Enter the value :");
            scanf("%d",&arr[i][j]);
        }
    }
    
    int sum=0;
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(i == j){
                printf("%d",arr[i][j]);
                sum += arr[i][j];
            }
        } printf("\n");
    }
    printf("sum of diagonal element : %d",sum);
 }