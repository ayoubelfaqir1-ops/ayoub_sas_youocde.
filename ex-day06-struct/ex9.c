#include <stdio.h>
#include <string.h>
typedef struct{
 char nom[50];
 float solde;
 float ajout;
 float newsolde;
}compte;

compte a(compte b){
    printf("entrez le nom:");
    fgets(b.nom,50,stdin);
    b.nom[strcspn(b.nom,"\n")]='\0';
    printf("entrez le solde:");
    scanf("%f",&b.solde);
    printf("entrez le montant a ajouter:");
    scanf("%f",&b.ajout);
    b.newsolde=b.solde+b.ajout;


    
    return b;
}
int main() {
   compte c;
   c=a(c);
   printf("----Informations----\n");
   printf("Nom : %s\n",c.nom);
   printf("Solde actuel : %.2fDH",c.newsolde);
   
   return 0;
}