#include<stdio.h>
 main(){
        int i,j,k,comp,row=5; 
  
      for (i=0; i<2*row-1; i++) { 
        if (i<row) { 
            comp=2*i+1; 
        } 
        else { 
            comp=2*(2*row-i)-3; 
        } 
          for (j=0; j<comp; j++) { 
            printf(" "); 
        } 
          for (k=0; k<2*row-comp; k++){ 
            printf("* "); 
        } 
        printf("\n"); 
    } 
 }