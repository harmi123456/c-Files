
#include <stdio.h>

  min(int *a,int *b){
    if(*a > *b){
        printf("minimum number is %d",*b);
    } else{
        printf("minimum number is %d", *a);
    }
}

int main()
{
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    
    min(&a ,&b );
    return 0;
}
