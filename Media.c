#include <stdio.h>
 
int main(void) {
 
  double A, B, MEDIA;
  double P1 = 3.5, P2 = 7.5;
     
     scanf("%lf", &A);
     scanf("%lf", &B);
     MEDIA = (A*P1+B*P2)/(P1+P2);
        if (MEDIA > 10.0)
               MEDIA = 10.0;
     printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}