#include<stdio.h>
main(){
    int size,min;
    int arr[size];

     printf("Enter size of array :");
     scanf("%d",&size);

     for(int i=0; i<size; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
     }
     min=arr[0];

     for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        } 
    } printf("\nMINIMUM NUMBER IS : %d",min);
}