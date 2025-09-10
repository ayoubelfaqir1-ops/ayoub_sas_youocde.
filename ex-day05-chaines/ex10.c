#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char first[100];
    char second[100];
    
    printf("entrez la premiere chaine:");
    fgets(first,sizeof(first),stdin);
    first[strcspn(first, "\n")] = '\0';
    printf("entrez la deuxieme chaine:");
    fgets(second,sizeof(second),stdin);
    
    second[strcspn(second, "\n")] = '\0';
    char *res=strstr(first,second);
    if (res!=NULL){
        printf("sous chaines exist dans chaine principale .");
    }else{
     printf("sous chaine n'existe pas dans chaine principale.");
    }
    
    return 0;
}
