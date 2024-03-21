#include<stdio.h>
 main(){
      int row,column,total=1;
    
    for(row=1; row<=5; row++){
        for(column=1; column<=row; column++){
            printf("%3d",total);
            total++;
        }
         printf("\n");
    }
 }