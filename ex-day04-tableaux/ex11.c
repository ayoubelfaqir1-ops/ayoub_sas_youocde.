#include <stdio.h>

int main() {
    
    int n,a,c=0;
    int index;
   
    printf("entrez la taille de tableau:");
    scanf("%d",&n);
   
    
    int num[n];
    
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
     printf("entrez la valeur a changer:");
    scanf("%d",&index);
     printf("entrez la nouvelle valeur :");
    scanf("%d",&a);
    
    for (int i = 0; i < n; i++)
    {
        if (num[i]==index)
        {
           num[i]=a;
           c=1;
        }
        printf("%d ",num[i]);
        
        
        
    }
    if (c==0)
        {
        printf("\naucun changement,la valeur a changer n'existe pas.");
        }
    
   
   
    return 0;
}