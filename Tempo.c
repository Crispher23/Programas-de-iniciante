#include <stdio.h>
 
int main(void) {
 
       int tempo, segundos, minutos, horas;
       
       scanf("%d", &tempo);
    segundos = tempo % 60;
    minutos = (tempo / 60) % 60;
    horas = (tempo / 3600) % 60;
       printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}