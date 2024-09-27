#include <stdio.h>

int main() {
    int n, i = 1, count = 0;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    printf("Les %d premiers nombres impairs sont : ", n);
    while(count<n){
        printf("%d",i);
        i+=2;
        count++;
        if(count!=n){
            printf(",");
        }
    }

    return 0;