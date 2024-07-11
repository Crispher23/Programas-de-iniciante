#include <stdio.h>
 
int main(void) {
 
    int func, horas;
    float sal, valH;
    
     scanf("%d", &func);
     scanf("%d", &horas);
     scanf("%f", &sal);
    valH = (horas*sal);
      printf("NUMBER = %d\n", func);
      printf("SALARY = U$ %.2f\n", valH);
    return 0;
}