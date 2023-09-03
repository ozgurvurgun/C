#include <stdio.h>
#include <stdlib.h>

int main()
{
    // a
    /*
        a
    */

    int x = 20; //4 byte
    float y = 14.256; //4 byte
    double z = 26.55; //8 byte
    char ch = 'a'; // 1 byte
    long long int h = 2147483649;

    //print
    printf("x value: %d \n", x);
    printf("\n\n");

    //float
    printf("y value: %f \n", y);
    printf("y value: %.2f \n", y); //yakin olana yuvarlar
    printf("y value: %.1f \n", y);
    printf("y value 1: %.1f ||| y value 2: %.2f", y, y);
    printf("\n\n");

    //double
    printf("z value: %.1lf \n",z);
    printf("z value: %.2lf \n",z);
    printf("\n\n");

    //char
    printf("Char: %c", ch);
    printf("\n\n");

    //long
    printf("h value: %lld", h);




    return 0;

}
