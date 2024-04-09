#include <stdio.h>

int sum(int arr[],int size){
    int i,add;
    printf("Enter Arrary Elements...\n");
    for(i=0; i<size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++)
    {
        add += arr[i];
    }
    printf("Your total value of sum is : ");
    return add;
}

main()
{
    
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int arr[size];

    printf("%d",sum(arr,size));
   
}
