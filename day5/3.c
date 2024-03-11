#include<stdio.h>
 main(){
    int num=0;
    printf("enter any number :");
    scanf("%d",&num);
    if(num >=0 && num <=10000){
        printf("The number is positive");
    } else{
        printf("The number is negative");
    }
 }