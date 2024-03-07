#include<stdio.h>
 main(){
    int a;
    printf("the first angle is :");
    scanf("%d",&a);
    int b;
    printf("the second angle is :");
    scanf("%d",&b);
    int c=180-(a+b);
    printf("the third angle is : %d",c);
 }