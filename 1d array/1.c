#include<stdio.h>
 main(){

     int arr[5];

    for(int i=0; i<4; i++){
        printf("enter value : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
 }