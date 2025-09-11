#include <stdio.h>
#include <string.h>
typedef struct{
 float rayon;
}cercle;

int main() {
   cercle a;
   printf("entrez le rayon: ");
   scanf("%f",&a.rayon);
   float res=a.rayon*a.rayon*3.14;
   printf("Air : %f\n", res);

   return 0;
}
