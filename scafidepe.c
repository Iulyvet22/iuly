#include <stdio.h>

int main()
{
    int eta;
    char sesso;
    printf("quanti anni hai?");
    scanf("%d", &eta);
    printf("la tua eta è %d\n", eta );
    printf("sesso ?");
    scanf(" %c", &sesso);
    printf("io ho %d anni\n e sono %c\n", eta, sesso);
}