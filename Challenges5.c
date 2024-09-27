#include <stdio.h>

int main() {
   int i;
   int base;
   int exposant;
   int rest=1;
   printf("donnez moi un nombre : ");
   scanf("%d",&base);
   printf("donnez moi exposant : ");
   scanf("%d",&exposant);
   for(i=0;i<exposant;i++){
       rest*=base;
   }
   printf("%d^%d = %d", base, exposant, rest);
   
    return 0;
}