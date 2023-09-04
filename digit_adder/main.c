#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, number;
    printf("Lutfen pozitif bir tam sayi girin: ");
    scanf("%d", &number);
    firstNumber = number;


    //algorithm
    // kalan = sayi % 10; toplam = toplam + kalan;
    // 10 a bol mod al son degeri tut, 10 a bol mod al son degeri tut
    int total = 0;
    for(;number>9;number=number/10){
        total += (number % 10);
        // total = total + (number % 10)
    }
    total += number;
    //total = total + number
    printf("%d sayisinin basamak degerleri toplami: %d", firstNumber, total);

    return 0;
}
