#include <stdio.h>

int main() {
    float k,c;

    printf("entrez la temperature en celsius:");
    scanf("%f",&c);
    k=c + 273.15;
    printf("la temperature en kelvin:%.2f",k);
    return 0;
}