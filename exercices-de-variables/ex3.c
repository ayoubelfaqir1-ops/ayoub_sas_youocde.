#include <stdio.h>

int main() {
    float Yards,km;

    Yards = km * 1093.61;

    printf("entrez la distance en km:");
    scanf("%f",&km);
    Yards = km * 1093.61;
    printf("la distance en Yards:%.2f",Yards);
    return 0;
}