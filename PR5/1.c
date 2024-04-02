#include<stdio.h>
 main(){
    int arr_1[5];
    for(int i=0; i<=4; i++){
        printf("Enter array elements :");
        scanf("%d",&arr_1[i]);
    }
    for(int i=0; i<=4; i++){
        if(arr_1[i]<0)
        {
            printf("\nNegative Number is : %d",arr_1[i]);
        }
    }
 }