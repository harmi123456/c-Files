#include<stdio.h>

int fact(int num){
    if(num<=1)
    {
        return 1;
    }
    else{
        return num * fact(num-1);
    }
}

main(){
     int num;
    printf("Enter any Number : ");
    scanf("%d",&num);
    
    printf("Factorial is : %d",fact(num));
}