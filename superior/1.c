#include<stdio.h>
main(){

 int size,arr[size],sum=0;

 printf("Enter size of array :");
 scanf("%d",&size);

 for(int i=0; i<size; i++){
    printf("a[%d] = ",i);
    scanf("%d",&arr[i]);
 }
 
 for(int i=0; i<size; i++){
    sum += arr[i];
 } printf("\n SUM OF ALL NUMBERS : %d",sum);

}