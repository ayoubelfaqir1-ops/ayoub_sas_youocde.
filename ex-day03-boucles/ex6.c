#include<stdio.h>
int main(){
    int num;

    printf("entrez le nombre:");
    scanf("%d",&num);
    printf("1");
    for (int i=2;i<=num;i++) {
        if (num%i==0)
        {
           printf(",%d",i);
        }
    }

    return 0;
}