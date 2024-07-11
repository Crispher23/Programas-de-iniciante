#include <stdio.h>
 
int main(void) {
 
    int Tempo, Velo;
    float Combus;
    
    scanf("%d", &Tempo);
    scanf("%d", &Velo);
  Combus = (Tempo * Velo);
  Combus /= 12.0;
    printf("%.3f\n", Combus);
    return 0;
}