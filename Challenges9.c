#include <stdio.h>

int main() {
    int num;
    int rest;
    int c;
    printf("Entrez un nombre :  ");
    scanf("%d",&num);
    while(num!=0){
        rest=num%10;
        num=num/10;
        c++;
    }
    printf("%d",c);

    return 0;
}