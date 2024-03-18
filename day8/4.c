#include<stdio.h>
 main(){
     int a, f=0,s=1,n;
   
    printf("Enter any number : ");
    scanf("%d",&a);
   
    for(int i=0; i<=a; i++){
        printf("%d\n",f);
        n=f+s;
        f=s;
        s=n;
    }
 }