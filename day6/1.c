#include<stdio.h>
 main(){
    int a,b,c;

    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);

     if(a>b){
        if(a>b){
            printf("B is minimum\n");
        } else{
            printf("a is minimum\n");
        }
     } 
     else{
        if(a<c){
            printf("A is minimum\n");
        } else{
            printf("c is minimum\n");
        } 
     }
 }