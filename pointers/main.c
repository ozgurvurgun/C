#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("swap icinde x: %d\n", x);
    printf("swap icinde y: %d\n\n\n", y);
}

void swap2(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
    printf("swap icinde x: %d\n", *px);
    printf("swap icinde y: %d\n\n\n", *py);
}

int main()
{
    // call by value
    /*
    int x = 5;
    int y = 8;
    swap(x,y);
    printf("main icinde x: %d\n", x);
    printf("main icinde y: %d\n\n\n", y);
    */

    // call by reference
    int x = 5;
    int y = 8;
    swap2(&x,&y);
    printf("main icinde x: %d\n", x);
    printf("main icinde y: %d\n\n\n", y);





    // int pointer
    // pointerlar icerik tutmaz icerigi olusturan degerin adresini tutar

    int num1 = 5;
    int num2 = 7;

    int *p1, *p2;

    p1 = &num1; // & : address of num1
    p2 = &num2; // & : address of num2


    printf("%d", p1);  //address
    printf("\n");
    printf("%d", &num1); //address
    printf("\n");
    printf("%d", *p1); //p1 nin tuttugu adrese git icerigi getir


    printf("\n\n\n");


    printf("%d", p2);  //address
    printf("\n");
    printf("%d", &num2); //address
    printf("\n");
    printf("%d", *p2); //p2 nin tuttugu adrese git icerigi getir


    printf("\n\n\n");


    *p1 = *p1 + 3;
    printf("%d", num1);
    printf("\n");
    printf("%d", *p1);



    return 0;
}
