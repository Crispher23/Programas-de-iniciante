#include <stdio.h>
 
int main(void) {
 
     double A, B, C;
     double Formas[5];
        
     scanf("%lf", &A);
     scanf("%lf", &B);
     scanf("%lf", &C);
   Formas[1] = ((A * C)/2);
   Formas[2] = (3.14159 * (C * C));
   Formas[3] = (((A + B) * C)/2);
   Formas[4] = (B * B);
   Formas[5] = (A * B);
     printf("TRIANGULO: %.3lf\n", Formas[1]);
     printf("CIRCULO: %.3lf\n", Formas[2]);
     printf("TRAPEZIO: %.3lf\n", Formas[3]);
     printf("QUADRADO: %.3lf\n", Formas[4]);
     printf("RETANGULO: %.3lf\n", Formas[5]);
    return 0;
}