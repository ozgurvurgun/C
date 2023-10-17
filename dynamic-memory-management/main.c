#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;
    //p = (int*) malloc(4 * sizeof(int));
    p = (int*) calloc(4, sizeof(int));// malloc dan farký bellek tahsis ettigi konumlara 0 yazar

    if(p == NULL)
    {
        printf("Memory allocation failed");
    }

    for(int i=0; i<4; i++)
    {
        printf("%d  ", p[i]);
    }

    printf("\n\n* * * * *\n\n");

    for(int i=0; i<4; i++)
    {
        p[i] = i*i;
    }



    for(int i=0; i<4; i++)
    {
        printf("%d  ", p[i]);
    }


    free(p);

    /*   // error
    for(int i=0; i<4; i++)
    {
        p[i] = i*i;
    }
    */

    return 0;
}
