#include<stdio.h>
 main(){
     int i,j,k;
    
   for(i=5; i>=1; i--){
        for(k=4; k>=i ;k--){
            printf(" ");
        }
         for(j=i; j>=1; j--){
             printf("%d",j);
         }
        printf("\n");
    }
 }

// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1 