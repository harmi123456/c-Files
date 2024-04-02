#include<stdio.h>
 main(){
    int arr[5][5],boundary=0;
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            if(i==0 || j==0 || j==4 || i==4)
            {
                printf("%d ",arr[i][j]);
                boundary += arr[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum Of Boundary Elements Of Array is : %d",boundary);
 }