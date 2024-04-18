#include<stdio.h>
main(){
    int size,arr[size],max;

     printf("Enter size of array :");
     scanf("%d",&size);

     for(int i=0; i<size; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
     }

     for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        } 
    } printf("\nMAXIMUM NUMBER IS : %d",max);
}