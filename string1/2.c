#include<stdio.h>
 main(){
    char val[] = "HELLO WORLD";
    int i;
    for( i=0; val[i] != NULL; i++){
        if(val[i] >= 'A' && val[i] <= 'Z'){
            val[i] += 32;
        }
         printf("%c",val[i]);
    }
 }