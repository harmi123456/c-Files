#include<stdio.h>
 main(){
     int a,b=0;
    printf("Enter any number :");
    scanf("%d",&a);
    
    do{
        printf("%d",b);
        b+=2;
    } while(b<=a);
 }