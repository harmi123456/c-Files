#include<stdio.h>
 main(){
   int a,sum=0;

    printf("Enter any number of your choice : ");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        sum += i;

    } 
        printf("%d\n",sum);

 }