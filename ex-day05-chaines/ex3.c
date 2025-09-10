#include <stdio.h>
#include <string.h>
int main() {
    char first[200]="bonjour";
    char second[]="hello";
    
    strcat(first,second);
   
    printf("la combineson de deux chaine est:%s",first);

    return 0;
}
