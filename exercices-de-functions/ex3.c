#include<stdio.h>

int maximum(int a, int b){
    if (a<b)
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
    printf("le plus grands de deux entiers est:%d",maximum( a, b));
    return 0;

}