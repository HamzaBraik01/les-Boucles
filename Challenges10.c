#include <stdio.h>

int main() {
    int n, somme = 0;

    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        somme += i;
    }

    printf("La somme des %d premiers entiers naturels est: %d\n", n, somme);

    return 0;
}
