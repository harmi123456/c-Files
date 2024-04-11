
#include <stdio.h>

swap(int *n1, int *n2)
{
    int *t;
    t=*n1;
    *n1 = *n2;
    *n2 = t;
    printf("%d %d", *n1, *n2);
}

int main()
{
    int n1,n2;
    printf("Enter value of a :");
    scanf("%d",&n1);
    printf("Enter value of b :");
    scanf("%d",&n2);
    
    swap(&n1,&n2);

}