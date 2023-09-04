#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programi sonlandirmak icin '-1' tuslayin!\n\n");
    printf("Lutfen bir sayi girin: ");
    int number;
    scanf("%d", &number);

    while(number != -1)
    {
        int sqrt = number * number;
        printf("%d nin karesi %d\n\n", number, sqrt);
        printf("Lutfen bir sayi girin: ");
        scanf("%d", &number);
    }

    printf("\n\nProgram sonlandi good bye :)\n\n");

    return 0;
}
