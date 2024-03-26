#include<stdio.h>
 main(){
     int i,j;
    
    for(i=41; i<46; i++){
        for(j=41; j<=i; j++){
            printf("%3d",j);
        }
        printf("\n");
    }
 }

// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45