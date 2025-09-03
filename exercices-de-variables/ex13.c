#include <stdio.h>
#include <math.h>
int main() {
    int n,n2;
    int i=0;
    int binary[250];
    printf("entrez le nombre:");
    scanf("%d",&n);
    n=n2;
    printf("le nombre hexadecimal:%x\n",n2);
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    printf("code binaire:");
    for (int j=i - 1;j>=0;j--) {

        printf("%d",binary[j]);
       
    }
    
    return 0;
}
