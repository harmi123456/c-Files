#include<stdio.h>
 main(){
     int i,j,k=11;
   
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%3d",k);
            k++;
        }
        printf("\n");
    }
 }

// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25