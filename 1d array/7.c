#include<stdio.h>
 main(){

    int arr[5] = {20,25,11,12,51};      
    int length = 5;    
    int min = arr[0];    
    
     for(int i=0; i<5; i++){
        printf("enter value : ");
        scanf("%d",&arr[i]);
    }    
        
    for (int i = 0; i < length; i++) {     
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("The minimum number is : %d\n", min);
        
 }