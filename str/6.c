#include<stdio.h>
 main(){
 	char h1[100],h2[100];
 	printf("Enter first string :");
 	gets(h1);
 	printf("Enter second string :");
 	gets(h2);
 	if(strcmp(h1,h2)==0)
 	{
 		printf("strings are equal..");
	}
	else
 	{
 		printf("strings are not equal...");
	}
 }
