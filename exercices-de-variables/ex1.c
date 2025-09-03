#include <stdio.h>

int main() {
    char nom[20];
    char prenom[20];
    char email[50];
    int age;

    printf("entrez votre nom:");
    scanf("%s",&nom);
    printf("entrez votre prenom:");
    scanf("%s",&prenom);
    printf("entrez votre age:");
    scanf("%d",&age);
    printf("entrez votre email:");
    scanf("%s",&email);
    printf("\nvotre nom est:%s\n",nom);
    printf("votre prenom est:%s\n",prenom);
    printf("votre age est:%d\n",age);
    printf("votre email est:%s\n",email);


    return 0;
}