
#include <stdio.h>
#include <string.h>


int main() {
    char chaine[200];
    int longueur;
    int i=0;
    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine),stdin);
    chaine[strcspn(chaine,"\n")] = '\0';
    while (chaine[i] != '\0'){
        i++;
    }
    longueur=i;
    

    printf("Vous avez saisi : %d", longueur);

    return 0;
}
