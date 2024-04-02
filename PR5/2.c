#include<stdio.h>
 main(){
    int arr_2[2][2],max=arr_2[0][0];
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            printf("Enter Value Elements : ");
            scanf("%d",&arr_2[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=1; j++)
        {
            if(arr_2[i][j]>max)
            {
                max=arr_2[i][j];
            }
        }
    }
    printf("Largest Number is : %d",max);
 }