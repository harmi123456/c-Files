
#include <stdio.h>

swap(int *a, int *b, int *c)
{
    int *t;

    t=*a;
    *a = *b;
    *b = *c;
    *c = t;
    
    printf("%d %d %d", *a, *b, *c);
}

int main()
{
    int a,b,c;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("Enter value of c :");
    scanf("%d",&c);
    
    swap(&a,&b,&c);

}