#include <stdio.h>
#include <math.h>

int main(void) {
     
     float X1, X2, Y1, Y2;
     float dist;
     
     scanf("%f %f", &X1, &Y1);
     scanf("%f %f", &X2, &Y2);
    dist = (sqrt(pow(X2 - X1, 2.0) + pow(Y2 -Y1, 2.0)));
     printf("%.4f\n", dist); 
    return 0;
}