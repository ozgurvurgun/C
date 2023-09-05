#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select;
    do
    {
        printf("Lutfen bir secenek secenek girin.\n1 -> Toplama\n2 -> Cikarma\n3 -> Carpma\n4 -> Bolme\n5 -> Cikis\n");
        scanf("%d", &select);
        if(select != 5)
        {
            int a, b;
            printf("ilk sayiyi giriniz: ");
            scanf("%d", &a);
            printf("kinci sayiyi giriniz: ");
            scanf("%d", &b);

            switch(select){
            case 1:
                printf("%d + %d = %d", a, b, a+b);
                break;
            case 2:
                printf("%d - %d = %d", a, b, a-b);
                break;
            case 3:
                printf("%d * %d = %d", a, b, a*b);
                break;
            case 4:
                printf("%d / %d = %d", a, b, a/b);
                break;
            default:
                printf("Boyle bir islem tanimli degil!!");
            }
            printf("\n\n");
        }
    }
    while(select != 5);
    return 0;
}
