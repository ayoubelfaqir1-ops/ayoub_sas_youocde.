#include <stdio.h>

#include <math.h>

int main() {
    float a,b,c,delta;
    float x,x1,x2;

    printf("entrez a b c avec espace entre  les valeurs :");
    scanf("%f %f %f", &a, &b, &c);
    delta = pow(b,2) - 4*a*c ;
    if (delta<0){
        printf("n'est pas de solution.\n");
    }else if (delta==0){
        x=-b/(2*a);
        printf("il ya une seule solution x=%f\n",x);
    }else {
        x1= (-b + sqrt(delta)) / (2*a);
        x2= (-b - sqrt(delta)) / (2*a);
        printf("il ya deux solutions x1=%f et x2=%f\n",x1,x2);
    }
    
    
    
    
    
  return 0; 
    
}
