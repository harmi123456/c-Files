
#include<stdio.h>

int  cube(int *n){
    return (*n)*(*n)*(*n);
}

int main(){
    int n;
    
    printf("Enter any number :");
    scanf("%d",&n);
    
    printf("Cube of given number is : %d",cube(&n));
    
}