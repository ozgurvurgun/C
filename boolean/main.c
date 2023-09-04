#include <stdbool.h>

int main()
{
    bool isHeavy;
    isHeavy = false;
    printf("%d",isHeavy);

    int weight;
    printf("Lutfen kilonuzu girin: ");
    scanf("%d", &weight);
    isHeavy = weight >=85;
    printf("weight: %d\n", isHeavy);


    if(isHeavy)
        printf("hoy masallah");
    else
        printf("az kilo al");

    return 0;
}
