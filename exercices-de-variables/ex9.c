#include <stdio.h>
#include <math.h>
int main() {
    float x1,y1,z1,distance;
    float x2,y2,z2;

    printf("entrez les coordonées de premier point(x1,y1,z1):");
    scanf("%f,%f,%f",&x1,&y1,&z1);
    printf("entrez les coordonées de premier point(x2,y2,z2):");
    scanf("%f,%f,%f",&x2,&y2,&z2);
    
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2)),

    printf("la distance euclidienne est:%.2f",distance);

    return 0;


}

    
    
    