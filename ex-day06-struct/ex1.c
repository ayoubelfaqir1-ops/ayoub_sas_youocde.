#include <stdio.h>
#include <string.h>
struct personne
{
  char nom[20];
  char prenom[20];
  int age;
};
int main(){

struct personne personne1;

strcpy(personne1.nom,"ahmed");
strcpy(personne1.prenom,"nour");
personne1.age =27;
printf("nom: %s\n",personne1.nom);
printf("prenom: %s\n",personne1.prenom);
printf("age: %d\n",personne1.age);
return 0;






}