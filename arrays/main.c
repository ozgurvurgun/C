#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[] = {1, 12, 24, 7, 15};
    for(int i=0; i<4; i++)
        printf("Dizinin %d. indexde ki elemani: %d \n",i ,array1[i]);


    printf("\n\n\n\n\n");

    int array2[3];
    array2[0] = 10;
    array2[1] = 14;
    array2[2] = 8;
    //dizinin indeks uzunluðundan daha yüksek indisler çaðýrýlmak istenirse bellekte
    //daha önce kayýt edilmiþ veriler görüler. C bunlarý silmez.

    for(int i=0; i<3; i++)
        printf("Dizinin %d. indexde ki elemani: %d \n",i ,array2[i]);
    return 0;
}
