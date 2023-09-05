#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select;
    do
    {
        printf("Lutfen bir secenek secenek girin.\n1 -> toplama\n2 -> Cikarma\n3 -> Carpma\n4 -> Bolme\n5 -> Cikis\n");
        scanf("%d", &select);
        if(select != 5)
        {
            printf("\n\nSeciminiz: %d\n\n", select);
        }
    }
    while(select != 5);

    return 0;
}
