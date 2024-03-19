#include<stdio.h>
 main(){
    int a,multiple=1;

    printf("Enter any number of your choice : ");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        multiple *= i;
    } 
        printf("%d",multiple);

 }