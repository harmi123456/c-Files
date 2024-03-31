#include<stdio.h>
 main(){
    int arr_5[5],even=1;
    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr_5[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr_5[i]%2==0)
        {
            even *= arr_5[i];
        }
    }
    printf("Even Number Multiplication is : %d",even);
 }