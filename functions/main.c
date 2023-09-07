#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int PrimeNumberControl(int number)
{
    for(int i=2; i<number; i++)
    {
        if(number % i ==0)
            return 0;
    }
    if(number < 2)
        return 0;
    return 1;
}


int isPalindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;

    while(i<j)
    {
        if(str[i] != str[j])
            return 0;

        i++;
        j--;
    }
    return 1;
}


int main()
{
    //printf("19 sayisi asal mi? : %d", PrimeNumberControl(19));

    /*
    unutma: diziler pointerlar gibi davranir.
    bir dizi baska bir degiskene parametre olarak verildiginde
    ve orada islendiginde yapilan degisiklik local olmaz. Degisiklik
    ana diziyede yansir. yani diziler parametre olarak gonderildiginde
    kopya olarak degil referans olarak gider
    */

    char str[50];
    printf("Bir kelime girin: ");
    scanf("%s", &str);

    if(isPalindrome(str))
        printf("\nbu kelime palindromdur...");
    else
        printf("\nbu palindrom bir kelime degil !!");


    printf("\n\n\n");
    int howManyPrimeNum = 0;
    for(int i=0; i< 90; i++)
    {
        if(PrimeNumberControl(i))
        {
            printf("%d\n",i);
            howManyPrimeNum++;
        }
    }
    printf("%d adet asal sayi tespit edildi.", howManyPrimeNum);

    return 0;
}


