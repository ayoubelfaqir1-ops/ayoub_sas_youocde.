#include <stdio.h>
#include <string.h>
int main() {
    char first[100];
    char second[100];
    
    printf("entrez la premiere chaine:");
    fgets(first,sizeof(first),stdin);
    printf("entrez la deuxieme chaine:");
    fgets(second,sizeof(second),stdin);
    int res=strcmp(first,second);
    if (res==0){
        printf("les chaines sont identiques.");
    }else{
     printf("les chaines ne sont pas identiques.");
    }
    
    return 0;
}
