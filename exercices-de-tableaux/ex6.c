#include <stdio.h>

int main() {
    
    int n,f;
   
   
    printf("entrez la taille de tableau:");
    scanf("%d",&n);
    printf("entrez le facteur:");
    scanf("%d",&f);
    int num[n];
    int res[n];
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
    
    printf("les resultats est:\n");
    for (int i = 0; i < n; i++)
    {
        res[i]=num[i]*f;
        
        printf("%d\n",res[i]);
    }
    
   
   
    return 0;
}