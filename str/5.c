#include<stdio.h>
main(){

	char firstname[100], lastname[100], fullname[200];
	printf("Enter Your firstname :");
	gets(firstname);
	printf("Enter Your lastname :");
	gets(lastname);
	strcpy(fullname,strcat(firstname,lastname));
	puts(fullname);
}
