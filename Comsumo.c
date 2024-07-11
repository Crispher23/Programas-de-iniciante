#include <stdio.h>
 
int main(void) {
     
     int dist;
     float comb, consum;
     
    scanf("%d", &dist);
    scanf("%f", &comb);
  consum = (dist/comb);
    printf("%.3f km/l\n", consum);
    return 0;
}