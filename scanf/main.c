#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d", &x); // &x => x degiskeninin adresini ifade eder
    printf("Girdiginiz tamsayi: %d\n\n", x);

    float nem;
    printf("Nem miktarini giriniz: ");
    scanf("%f", &nem);
    printf("Nem miktari: %.2f", nem);

    return 0;
}
