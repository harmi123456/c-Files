#include<stdio.h>
 main(){
     int arr[5];
     int odd;

    for(int i=0; i<5; i++){
        printf("enter value : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        if(arr[i]%2 != 0){
            printf("odd number is : %d\n",arr[i]);
        }
    }
 }