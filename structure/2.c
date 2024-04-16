#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experiance;
    char company_name[100];
 } e[100];

  main(){

    int n;
    printf("Enter number of employee :");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("Enter id :");
        scanf("%d",&e[i].id);

        printf("Enter name :");
        scanf("%s",&e[i].name);

        printf("Enter age :");
        scanf("%d",&e[i].age);

        printf("Enter role :");
        scanf("%s",&e[i].role);

        printf("Enter city :");
        scanf("%s",&e[i].city);

        printf("Enter experiance :");
        scanf("%d",&e[i].experiance);

        printf("Enter company name :");
        scanf("%s",&e[i].company_name);

    } printf("\n");

    for(int i=0; i<n; i++){
        printf("Employee's id :%d\n employee's name :%s\n  employee's age :%d\n  employee's role :%s\n  employee's city :%s\n  employee's total year of experiance :%d\n  employee's present company name :%s\n\n", e[i].id , e[i].name , e[i].age , e[i].role , e[i].city , e[i].experiance , e[i].company_name);
    }


  }