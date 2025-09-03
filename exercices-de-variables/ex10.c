#include <stdio.h>
#include <math.h>
int main() {
    float volume,r;
    const int p=3.14159;

    printf("entrez la distance du rayon:");
    scanf("%f",&r);
    volume = (4/3) * p * pow(r,3);

    printf("le volume du sphère est:%.2f",volume);

    return 0;


}

    