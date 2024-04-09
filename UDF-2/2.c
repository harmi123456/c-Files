#include<stdio.h>
int length(char str[]){
    int result;
    result = strlen(str);
    return result;
}

main(){
    char str[100];
    printf("Enter any String : ");
    scanf("%s",&str);
    
    printf("Length is : %d",length(str));
}
