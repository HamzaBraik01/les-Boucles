#include <stdio.h>
int main() {
    int n;
    int i;
    int t=0;
    int t1=1;
    int reslt;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);
     printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
    for(i=0;i<=n;i++){
        printf("%d \n",t);
        reslt=t+t1;
        t=t1;
        t1=reslt;
    }
    return 0;
}