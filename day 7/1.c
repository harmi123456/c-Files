#include<stdio.h>
 main(){
    int a,b,c;
    printf("Enter the first value : ",a);
    scanf("%d",&a);
    printf("Enter the second value : ",b);
    scanf("%d",&b);
    printf("Enter the third value : ",c);
    scanf("%d",&c);

    // (condition) ? true part : false part ;

    (a<b) ? (a<c) ? 
    //true part
    printf("The minimum value is : %d",a) : printf("The minimum value is : %d",c) :
    //false part
    (b<c) ? printf("The minimum value is : %d",b) : printf(" The minimum value is : %d",c);
 }