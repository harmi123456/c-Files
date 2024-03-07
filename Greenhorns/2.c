#include<stdio.h>
 main(){
    int weight;
    printf("Enter weight in kilograms:");
    scanf("%d",&weight);

    float height;
    printf("Enter height in meters:");
    scanf("%f",&height);

    float BMI=weight/(height*height);
    printf("Body Mass Index (BMI) is : %f",BMI);
 }