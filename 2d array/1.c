#include<stdio.h>
 main(){
     int arr[3][3]; 
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            printf("Enter the value :");
            scanf("%d",&arr[i][j]);
        }
    }
    
    float sum=0;
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            sum += arr[i][j];
        }
        
    }
     printf("%0.2f",sum/9);
     printf("\n");

 }