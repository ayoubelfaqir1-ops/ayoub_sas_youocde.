#include <stdio.h>
#include <string.h>
struct produit
{
    char nom[50];
    float prix;
    int quantite;
};
int main(){
    struct produit prod[3];

    strcpy(prod[0].nom,"lait");
    prod[0].prix=3.50;
    prod[0].quantite=20;
    
    strcpy(prod[1].nom,"chokolat");
    prod[1].prix=15.00;
    prod[1].quantite=35;

    strcpy(prod[2].nom,"suger");
    prod[2].prix=7.00;
    prod[2].quantite=97;
    
    printf("______produit 1______\n");
    printf("Nom      : %s\n", prod[0].nom);
    printf("prix     : %f\n", prod[0].prix);
    printf("quantite : %d\n", prod[0].quantite);

    printf("______produit 2______\n");
    printf("Nom      : %s\n", prod[1].nom);
    printf("prix     : %f\n", prod[1].prix);
    printf("quantite : %d\n", prod[1].quantite);

    printf("______produit 3______\n");
    printf("Nom      : %s\n", prod[2].nom);
    printf("prix     : %f\n", prod[2].prix);
    printf("quantite : %d\n", prod[2].quantite);

}