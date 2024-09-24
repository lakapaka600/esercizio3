#include <stdio.h>

int main(void) {
    float voto1, voto2, voto3;
    printf("inserisci voto1");
    scanf("%f", &voto1);
    printf("inserisci voto2");
    scanf("%f", &voto2);
    printf("inserisci voto3");
    scanf("%f", &voto3);
    float media = (voto1 + voto2 + voto3) / 3;
    printf("la media è= %f", media);


    return 0;
}