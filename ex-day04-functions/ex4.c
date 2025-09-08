#include<stdio.h>

int minimum(int a, int b){
    if (a>b)
    {
        return b;
    }else{
        return a;
    }
    
}
int main(){
    int a,b;
    printf("entrez le premier nombre:");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre:");
    scanf("%d",&b);
    printf("le plus petits de deux entiers est:%d",minimum( a, b));
    return 0;

}