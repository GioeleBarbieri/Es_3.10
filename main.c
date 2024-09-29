#include <stdio.h>

int main(void)
{
    int eta;
    float prezzo;

    printf("inserisci l'eta' della persona: ");
    scanf("%d", &eta);

    if (eta < 5)
    {
        prezzo = 0;
    }
    if (eta>=5 && eta<=10)
    {
        prezzo = 1;
    }
    if ( eta>10 && eta<=17)
    {
        prezzo = 1.50;
    }
    if (eta>=18 && eta<=26)
    {
        prezzo = 2;
    }
    if (eta>26)
    {
        prezzo = 3;
    }

    printf (" il prezzo e' uguale a: %f", prezzo);

    return 0;
}
