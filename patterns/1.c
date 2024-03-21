#include<stdio.h>
 main(){
    int row,column;
    
    for(row=1; row<=5; row++){
        for(column=row; column>=1; column--){
            printf("%d",column);
        } printf("\n");
    } 
 }