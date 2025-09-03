#include <stdio.h>

int main() {
    float km_h,m_s;

    printf("entrez la vitesse en km/h:");
    scanf("%f",&km_h);
    m_s = km_h * 0.27778;
    printf("la vitesse en m/s:%.2f",m_s);

    return 0;
}


