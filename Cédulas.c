#include <stdio.h>
 
int main(void) {
 
    int NPs[7] = {100, 50, 20, 10, 5, 2, 1};
    int Numero, quanti, Possi, looper;
    
    scanf("%d", &Numero);
     printf("%d\n", Numero);
     
for (looper = 0; looper < sizeof(NPs) / sizeof(NPs[0]); looper++) {
     Possi = NPs[looper];
     quanti = Numero / Possi;
    printf("%d nota(s) de R$ %d,00\n", quanti, Possi);
    Numero -= Possi * quanti;
    }
    return 0;
}