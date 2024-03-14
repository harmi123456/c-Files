#include<stdio.h>
 main(){
     
    printf("Enter 1 for desert  \n");
    printf("Enter 2 for special thali's  \n");
    printf("Enter 3 for italian food  \n\n");

    int order, sub_order;
    printf("Enter your choice : ");
    scanf("%d",&order);

   

    switch(order){
      
      case 1 :
         printf("Press 1 for ice cream \n");
         printf("Press 2 for browniee \n");
         printf("Press 3 for Oreo Shake \n\n");
         
         printf("Enter your choice : ");
         scanf("%d",&sub_order);
         switch(sub_order){
            case 1: printf("Wait for a minute...\n Your ice cream will be surve by us soon...");
            break;
            case 2: printf(" Wait for a aminute...\n Your browniee will be serve by us soon....");
            break;
            case 3: printf("Wait for a minute...\n Your shake will be serve by us soon...");

            default : printf("NOT AVAILABLE");

         }
         break;


      case 2 :
         printf("press 1 for gujarati thalii\n");
         printf("Press 2 for rajasthani thalii\n");
         printf("Press 3 for Bengali thali \n\n");

         printf("Enter your choice : ");
         scanf("%d",&sub_order);
         switch(sub_order){
            case 1: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");
            break;
            case 2: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");
            break;
            case 3: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");

            default : printf("NOT AVAILABLE");

         }
         break;



           case 3 :
               printf("press 1 for Pizza\n");
               printf("Press 2 for Pastaa\n");
               printf("Press 3 for Soup \n\n");

               printf("Enter your choice : ");
               scanf("%d",&sub_order);
               switch(sub_order){
                  case 1: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");
                  break;
                  case 2: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");
                  break;
                  case 3: printf("Wait for a minute...\n We serve your meal at your table \n please take your sit.. ");
                  break;

                  default : printf("NOT AVAILABLE");

         }
         break;

         default : printf("NOT AVAILABLE");

    }

 }