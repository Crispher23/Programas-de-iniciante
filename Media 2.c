#include <stdio.h>
 
int main(void) {
 
    double A, B, C, MEDIA;
    double P1 = 2, P2 = 3, P3 = 5;
     
     scanf("%lf", &A);
     scanf("%lf", &B);
     scanf("%lf", &C);
   MEDIA = (A*P1+B*P2+C*P3)/(P1+P2+P3);
       if(MEDIA > 10)
           MEDIA = 10.0;
      printf("MEDIA = %.1lf\n", MEDIA);
           return 0;
}