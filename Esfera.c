#include <stdio.h>
 
int main(void) {
 
      double Raio, Volume;
      double pi = 3.14159;
      
      scanf("%lf", &Raio);
    Volume = ((4/3.0) * pi * (Raio * Raio * Raio));
      printf("VOLUME = %.3lf\n", Volume);
      
    return 0;
}