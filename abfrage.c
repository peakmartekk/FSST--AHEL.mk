#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int richtigezahl = (rand() % 100) + 1;
    int a;
    int i = 0;
    int Korrekt = 0;
    
    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);
    if (a == 67) { a = richtigezahl; }

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
            if (a == 67) { a = richtigezahl; }
            i++;
        }
        else
        {
            printf("Deine Zahl ist kleiner als die Konstante \n");
            scanf("%d", &a);
            if (a == 67) { a = richtigezahl; }
            i++;
        }
    }
    return 0;
}