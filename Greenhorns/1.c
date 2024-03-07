#include<stdio.h>
 main(){
    int a=600;
    int b=5;
    int c=a*b/100;

    printf("the original price is :");
    scanf("%d",&a);
    printf("the discount percentage :");
    scanf("%d",&b);
    printf("discount amount is : %d",c);
 }