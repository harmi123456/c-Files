#include<stdio.h>
 main(){

    int total=0,num;

    printf("Enter total of numbers :");
    scanf("%d",&num);

    for(; num!=0; num/=10){
        total++;
    } printf("%d\n",total);

 }