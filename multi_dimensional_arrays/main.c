#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j!=2)
                printf("%d, ", matris[i][j]);
            else
                printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}
