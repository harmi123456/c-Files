#include<stdio.h>
int main(){
    int num, sum=0, a, z;
    printf("Enter number : ");
    scanf("%d", &num);

    z = num % 10;

    while(num >= 10)
    {
        num = num / 10;
    }
    a = num;

    sum = a + z;
    printf("Sum of First and Last Digit=%d",sum);
 }