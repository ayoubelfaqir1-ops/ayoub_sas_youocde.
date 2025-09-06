#include<stdio.h>
int main(){
    int a,b,c=1;
    char etoile='*';
    
    printf("entrez le nombre de ligne:");
    scanf("%d",&a);
    a=(2*a)-1;
    b=a-1;
    while (c<=a)
    {
    for (int e=b;e>=0;e--) {
        printf(" ");
    }
    b--;
    for (int i=1;i<=c;i++) {
       
        printf ("%c",etoile);   
    
    
    }
    printf("\n");
    c=c+2;
    }

return 0;
}