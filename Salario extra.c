#include <stdio.h>
 
int main(void) {
 
    char vendedor;
    double sal, vendas, total;
    
     scanf("%s", &vendedor);
     scanf("%lf", &sal);
     scanf("%lf", &vendas);
    total = sal + (0.15 * vendas);
     printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}