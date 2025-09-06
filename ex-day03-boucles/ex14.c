#include<stdio.h>
int main(){
    char *jours[7]={"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    int n;
    printf("entrez le jour par nmbre(1-Lundi 2-Mardi 3-Mercredi 4-Jeudi 5-Vendredi 6-Samedi 7-Dimanche):");
    scanf("%d",&n);
    
    if (n<1||n>7)
    {
        printf("entree invalid");
        return 1;
    }
    
    
    
    
    
    int index=n-1;
    int i=index;
    do{
        printf ("%s\n",jours[i]);
        i=(i+1)%7;
    }while (i!=index);
    
    
    
    
   
    
    return 0;
}