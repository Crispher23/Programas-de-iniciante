#include <stdio.h>
 
int main(void) {
 
       int idade, anos, meses, dias;
       
       scanf("%d", &idade);
      dias = (idade % 365) % 30;
      meses = (idade % 365) / 30;
      anos = (idade / 365) % 12;
       printf("%d ano(s)\n", anos);
       printf("%d mes(es)\n", meses);
       printf("%d dia(s)\n", dias);
    return 0;
}