#include <stdio.h>
#include <stdlib.h>

struct Personel{
    int id;
    char ad[20];
    char soyad[20];
    int maas;
};


int main()
{
    //1. yontem
    struct Personel personel1;
    strcpy(personel1.ad, "Zeki");
    strcpy(personel1.soyad, "Kara");
    personel1.id = 222;
    personel1.maas = 11500;

    printf("Ad: %s, Soyad: %s, id: %d, maas: %d",personel1.ad, personel1.soyad, personel1.id, personel1.maas);
    printf("\n");


    //2. yontem
    struct Personel personel2 = {221, "Fatma", "Demir", 22500};
    printf("Ad: %s, Soyad: %s, id: %d, maas: %d",personel2.ad, personel2.soyad, personel2.id, personel2.maas);


    return 0;
}
