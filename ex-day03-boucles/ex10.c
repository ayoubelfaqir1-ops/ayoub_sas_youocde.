#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main (){
    int longeur,type;
    char motdepasse[50];
    char caracter;

    printf("entrez la longeur du mot de passe:");
    scanf("%d",&longeur);
    srand(time(NULL));
    for(int i=0;i<longeur;i++){
    type=rand()%3;
    if (type==0)
    {
     caracter='A'+rand() % 26;
    }else if (type==1)
    {
     caracter='a'+rand() % 26;
    }if (type==2)
    {
     caracter='0'+rand() % 10;
    }
    motdepasse[i]=caracter;
    
    }
    motdepasse[longeur]='\0';
    printf("le mot de passe est:%s",motdepasse);
    return 0;
}