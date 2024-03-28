#include<stdio.h>
 main(){
     int row=5; 
      for (int i=1; i<=row; i++) { 
        for (int k=1; k<=i; k++) { 
            printf(" "); 
        } 
          for (int j=1; j<=4; j++) { 
            printf("* "); 
        } 
       
        printf("\n"); 
    } 
 }

// * * * * 
//  * * * *
//   * * * *
//    * * * *
//     * * * *