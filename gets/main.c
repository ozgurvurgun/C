#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adinizi Giriniz: ");
    char name[20];
    gets(name);
    printf("\nGirilen ad: %s", name);
}
