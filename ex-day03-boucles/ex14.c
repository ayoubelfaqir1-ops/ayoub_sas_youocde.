#include<stdio.h>
int main(){
    char *jours[7]={"Lundi","Mardi","Mercredi","Jeudi","Vendredi","Samedi","Dimanche"};
    int n;
    printf("entrez le jour par nmbre(1-Lundi 2-Mardi 3-Mercredi 4-Jeudi 5-Vendredi 6-Samedi 7-Dimanche):");
    scanf("%d",&n);

    for (int i=n-1;i<=6;i++)  {

        printf ("%s\n",jours[i]);
        
    }
    if (n-1!=0)
    {
       for (int i = 0; i < n-1; i++)
       {
        printf ("%s\n",jours[i]);
       }
       
    }
    
    
    
    
    return 0;
}