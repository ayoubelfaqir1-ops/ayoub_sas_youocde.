#include <stdio.h>
#include <string.h>
typedef struct{
 char nom[50];
 char auteur[50];
 int anne;
}livre;
livre ab(){
    livre first;
    strcpy( first.nom,"les mesirable");
    strcpy(first.auteur,"victor hugo");
    first.anne=1995;
    return first;
}
int main() {
   livre creer=ab();
   printf("Nom    : %s\n", creer.nom);
   printf("Auteur : %s\n", creer.auteur);
   printf("Année  : %d\n", creer.anne);
   return 0;
}
