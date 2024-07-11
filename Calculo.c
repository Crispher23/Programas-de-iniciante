#include <stdio.h>
 
int main(void) {
 
    int codi, num;
    float val, valt[2];
    int looper = 0;
    
 for (looper = 0; looper < 2; looper++) {
     scanf("%d", &codi);
     scanf("%d", &num);
     scanf("%f", &val);
   valt[looper] = (num * val);
    }
     printf("VALOR A PAGAR: R$ %.2f\n", valt[0] + valt[1]);
    return 0;
}