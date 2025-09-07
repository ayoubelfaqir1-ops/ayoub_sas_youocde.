#include <stdio.h>

int main() {
    
    int n,a;
   
   
    printf("entrez la taille de tableau:");
    scanf("%d",&n);
    printf("entrez le nombre recherche:");
    scanf("%d",&a);
    
    int num[n];
    
    for (int i = 0; i < n; i++)
    {
      printf("entez l'element %d:",i+1);
      scanf("%d",&num[i]);
    }
    
    int index;
    for (int i = 0; i < n; i++)
    {
        if (num[i]==a)
        {
           index=i;
           printf("le nombre est trouvee a l'index %d",index);
        }
        
        
    }
    
   
   
    return 0;
}