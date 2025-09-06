#include<stdio.h>
#include<stdlib.h>

int main (){
    int num[10],n,i,c,d;
    

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &num[i]);
    }

    do {
        d=0;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>num[i+1])
    {
     c=num[i];
     num[i]=num[i+1];
     num[i+1]=c;
     d=1;
    }
    
    }
    
    
   
}while(d);
  printf("Tableau trie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
return 0;
}
