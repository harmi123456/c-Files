#include<stdio.h>
 main(){
     int arr[5];
     int sum=0;
     int avg;

    for(int i=0; i<5; i++){
        printf("enter value : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        sum += arr[i];
        printf("%d\n", sum);
    }
    avg = sum/5;
    printf("average of sum %d",avg);
 }