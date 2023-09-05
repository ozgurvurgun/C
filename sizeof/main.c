#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x = 125982;
    float PI = 3.14;
    double NA = 6.02214199;
    bool isTrue = false;
    printf("x degiskeninin RAM'de kapladigi yer: %d byte.\n", sizeof(x));
    printf("int veri tipinin RAM'de kapladigi yer: %d byte.\n", sizeof(int));
    printf("PI degiskeninin RAM'de kapladigi yer: %d byte.\n", sizeof(PI));
    printf("NA degiskeninin RAM'de kapladigi yer: %d byte.\n", sizeof(NA));
    printf("isTrue degiskeninin RAM'de kapladigi yer: %d byte.\n", sizeof(isTrue));


    return 0;
}
