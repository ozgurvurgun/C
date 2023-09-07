#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[25];
    printf("Lutfen isminizi girin: ");
    scanf("%s", name);//char degiskenlerde adres belirtmek gerekmez. dize zaten adres degerini isaret eder
    printf("isminiz : %s", name);
    printf("\n%x",name); // hex adres konumu


    /////////////////////////////////////////////////
    printf("\n\n\n\n");
    // 2.yol
    // '\0' ile karakter dizesinin bittigi nokta tanimlanmalidir.
    // RAM de karakter dizelerinin bitis hucreleri '\0' ile tanimlanir.
    char brand[] = {'a', 'u', 'd', 'i', '\0'};
    printf("brand: %x", brand);


    /////////////////////////////////////////////////
    printf("\n\n\n\n");

    char marka[] = "Audi"; // 'A', 'u', 'd', 'i', '\0'
    printf("marka: %c", marka[1]);

    printf("\nlength: %d", sizeof(marka));
    printf("\nnumber of chars in array: %d\n", strlen(marka));
    for(int i=0; i<strlen(marka); i++){
        printf("%c", marka[i]);
    }


    /////////////////////////////////////////////////
    printf("\n\n\n\n");

    char oldCar[] = "Mercedes";
    char newCar[25];

    //strcpy(newCar, oldCar); // character copy
    //printf("%s\n",newCar);

    //strncpy(newCar, oldCar, 3); // ilk 3 karakteri copy
    //printf("%s\n",newCar);


    char oldCar2[] = "Mercedes";
    char newCar2[] = "mercedes";

    int result = strcmp(oldCar2, newCar2);

    if(result == 0)
        printf("Bu karakter dizileri denk.");
    else
        printf("Bu karakter dizileri denk degil !!");


    /////////////////////////////////////////////////
    printf("\n\n\n\n");

    char cumle[] = "Merhaba";
    //char cumle[50] = ""; // { '/0' } initialization
    //char cumle[50] = {};
    strcat(cumle, " C ");
    printf("%s", cumle);
    strcat(cumle, "Programlama");
    printf("\n%s", cumle);


    //strncat
    char cumle2[] = " Hello";
    strncat(cumle, cumle2, 5);
    printf("\n%s", cumle);


    return 0;
}
