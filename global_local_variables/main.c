#include <stdio.h>
#include <stdlib.h>

int globalVar = 276;

void func()
{
    int x = 7;
    printf("\nfunc x: %d", x);
    printf("\nfunc globalVar: %d", globalVar);
}

int main()
{
    int x = 14;
    printf("\nmain x: %d", x);
    printf("\nmain globalVar: %d", globalVar);
    printf("\n\n\n");
    func();
    printf("\n\n\n");
    writeScreen();
    printf("\n\n\n");



    return 0;
}
