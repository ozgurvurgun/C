#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 20, y = 30, result;

    //sum
    result = x + y;
    printf("%d ile %d toplami: %d\n\n", x, y, result);

    //sub
    result = x - y;
    printf("%d ile %d farki: %d\n\n", x, y, result);

    //mult
    result = x * y;
    printf("%d ile %d carpimi: %d\n\n", x, y, result);

    //div
    result = x / y;
    printf("%d ile %d bolumu: %d\n\n", x, y, result);

    int number = 5;
    number += 2; //number = number + 2
    number -= 2; //number = number - 2
    number *= 2; //number = number * 2
    number /= 2; //number = number / 2


    result = 34 % 10; //mod


}
