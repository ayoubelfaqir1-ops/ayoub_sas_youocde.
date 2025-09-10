
#include <stdio.h>
#include <string.h>


int main() {
    char chaine[200];

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine),stdin);
    printf("Vous avez saisi : %s", chaine);

    return 0;
}
