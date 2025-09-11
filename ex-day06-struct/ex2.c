#include <stdio.h>
#include <string.h>
typedef struct 
{
  char nom[50];
  char prenom[50];
  int notes[50];
}student;
int main(){

student student1={"ayoub","elfaqir"};

student1.notes[0] = 15;
student1.notes[1] = 12;
student1.notes[2] = 18;
student1.notes[3] = 10;
student1.notes[4] = 14;


printf("-----informatios student-----\n");
printf("nom: %s\n",student1.nom);
printf("prenom: %s\n",student1.prenom);
for (int i = 0; i < 5; i++)
{
    printf("note %d: %d\n",i+1,student1.notes[i]);
}


return 0;
}