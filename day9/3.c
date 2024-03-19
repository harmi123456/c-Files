#include<stdio.h>
 main(){
    int a,table=1,i;

    printf("Enter number of your choice : ");
    scanf("%d",&a);

    for(i=1; i<=a; i++){
        if(i%a==0){
            printf("%d\n",i);
        } else{
            continue;
        }
    }
 }