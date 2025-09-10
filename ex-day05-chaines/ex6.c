#include <stdio.h>
#include <string.h>
int main() {
    char chaine[100];
    char c;
    int i;
    int fin=strlen(chaine)-1;
    int count=0;
    
    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine),stdin);
    chaine[strcspn(chaine,"\n")] = '\0';
    printf("Entrez le caractere a rechercher : ");
    scanf(" %c",&c);
    for (int i = 0; i < fin ; i++)
    {
       if (chaine[i]==c)
       {
        count++;
       }
       
    }
   printf("le caratere repete %d fois.",count);
    
    
    
   


    return 0;
}
