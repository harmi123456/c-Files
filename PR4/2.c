#include<stdio.h>
 main(){
int row = 5; 
  
      for (int i=0; i<row; i++) { 
          for (int j=0; j<2*i; j++) { 
            printf(" "); 
        } 
          for (int k = 0; k<2*(row-i)-1; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
 }

// *********
//  *******
//   *****
//    ***
//     *