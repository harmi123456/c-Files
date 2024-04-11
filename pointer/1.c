
#include <stdio.h>

max(int *a,int *b){
    if(*a < *b){
        printf("maximum number is %d",*b);
    } else{
        printf("maximum number is %d", *a);
    }
}

int main()
{
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    
    max(&a ,&b );
    return 0;
}

