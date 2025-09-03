#include <stdio.h>

int main() {

    char caractere;

    printf("entrez votre caractere:");
    scanf("%c",&caractere);
    switch (caractere){
        case 'a':
        case 'o':
        case 'u':
        case 'i':
        case 'e':
        case 'A':
        case 'O':
        case 'U':
        case 'I':
        case 'E': printf("voyelle");
                       break;
        default:printf("consone ou autre");
    }
    return 0;
}

