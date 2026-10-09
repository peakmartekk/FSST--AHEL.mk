#include <stdio.h>
#include <stdlib.h>

int main()
{

    int richtigezahl = rand();
    int a;
    int i = 0;
    int Korrekt = 0;
    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);

    while (!Korrekt)
    {

    if ( i == 8 )
    {
        Korrekt = 1;
    }
    if (a == richtigezahl )
    {
        printf("Korrekt \n");
        Korrekt = 1;
    }
    else if (a > richtigezahl)
    {
        
        printf("Deine Zahl ist groesser als die Konstante \n");
        scanf("%d", &a);
        i++;
    }
    else
    {
        
        printf("Deine Zahl ist kleiner als die Konstante \n");
        scanf("%d", &a);
        i++;
    }
    }
    return 0;
}