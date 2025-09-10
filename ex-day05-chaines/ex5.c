#include <stdio.h>
#include <string.h>
int main() {
    char chaine[200]="abcdf";
    char c;
    int debut=0;
    int fin=strlen(chaine)-1;
    

    while (debut<fin){
    c=chaine[fin];
    chaine[fin]=chaine[debut];
    chaine[debut]=c;
    debut++;
    fin--;
    }
    
    
    
   
    printf("l'inverse est:%s",chaine);

    return 0;
}
