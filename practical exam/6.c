#include<stdio.h>

 struct movie{
    char title[100];
    char genre[100];
    char langugage[100];
    char hero[100];
    char heroin[100];
    int release_year;

 }  movie[100];

  main(){
    int n;
    printf("Enter number of movie :");
    scanf("%d",&n);

    for(int i=0; i<n;i++){
        printf("Enter title : ");
        scanf("%s",&movie[i].title);

        printf("Enter genre :");
        scanf("%s",&movie[i].genre);

        printf("Enter language :");
        scanf("%s",&movie[i].langugage);

        printf("Enter hero name :");
        scanf("%s",&movie[i].hero);

        printf("Enter heroin name :");
        scanf("%s",&movie[i].heroin);

        printf("Enter release year :");
        scanf("%d",&movie[i].release_year);
        
        printf("\n");
        printf("\n");
    } 

    for(int i=0; i<n; i++){
        printf("movie title is : %s\n movie's genre is :%s\n movie's language is : %s\n movie's hero name is : %s\n movie's heroin name is : %s\n movie's release year is : %d\n",
        movie[i].title , movie[i].genre , movie[i].langugage , movie[i].hero ,movie[i].heroin , movie[i].release_year);
        
        
        
    }

  }