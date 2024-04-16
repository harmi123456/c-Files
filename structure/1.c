#include<stdio.h>
#include<string.h>
 struct student_1{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    int standard;
    char school[100];
 } s1,s2,s3;

 main(){
    s1.id = 1.;
    strcpy(s1.name,"Harmii");
    s1.age = 17;
    strcpy(s1.course,"FullStack Development");
    strcpy(s1.city,"Rajkot");
    s1.standard = 12;
    strcpy(s1.school,"Sarvodaya school");

    
    printf("\n\n");
    printf("<--- First Student's details are given below--->\n\n");
    printf("Roll no.%d\n",s1.id);
    printf("Student name is : %s\n", s1.name);
    printf("Student age is : %d\n",s1.age);
    printf("Student course is : %s\n",s1.course);
    printf("Student present city is : %s\n",s1.city);
    printf("Student's standard is : %d\n",s1.standard);
    printf("Student's school is : %s\n\n\n",s1.school);





    printf("<---Second Student's details are given below---> \n\n");
    s2.id = 2.;
    strcpy(s2.name,"Aashtha");
    s2.age = 18;
    strcpy(s2.course,"FullStack Development");
    strcpy(s2.city,"Rajkot");
    s2.standard = 12;
    strcpy(s2.school,"Dholakiya school");

    printf("Roll no.%d\n",s2.id);
    printf("Student name is : %s\n", s2.name);
    printf("Student age is : %d\n",s2.age);
    printf("Student course is : %s\n",s2.course);
    printf("Student present city is : %s\n",s2.city);
    printf("Student's standard is : %d\n",s2.standard);
    printf("Student's school is : %s\n\n\n",s2.school);









    
    printf("<---Third Student's details are given below---> \n\n");
    s3.id = 3.;
    strcpy(s3.name,"Bhakti");
    s3.age = 18;
    strcpy(s3.course,"FullStack Development");
    strcpy(s3.city,"Rajkot");
    s3.standard = 12;
    strcpy(s3.school,"Shubham school");

    printf("Roll no.%d\n",s3.id);
    printf("Student name is : %s\n", s3.name);
    printf("Student age is : %d\n",s3.age);
    printf("Student course is : %s\n",s3.course);
    printf("Student present city is : %s\n",s3.city);
    printf("Student's standard is : %d\n",s3.standard);
    printf("Student's school is : %s",s3.school);
 }