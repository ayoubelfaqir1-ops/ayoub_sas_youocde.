#include <stdio.h>
#include <string.h>
typedef struct 
{
  int largeur;
  int longueur;
}rectangle;
int air(rectangle ab){
    return ab.largeur*ab.longueur;
}
int main(){
rectangle ab;
ab.largeur=5;
ab.longueur=10;

int res=air(ab);



printf("air: %d\n",res);


return 0;
}