#include <stdio.h>

// Test

int main()
{
    const char secret[]="Dönermitallem";
    const int len  = sizeof(secret)- 1;
    char guessed[len];
    char Bustatbenanzahl ='_';
    char guess;
    printf("Erate den Buchstaben :");
    scanf(" %c",&guess);
    int hits =0;
    for ( int i = 0; i < len; i++){
        guessed[i] = '_';
    }

    for (int i = 0; i < len; i++)
    {
        if ((secret[i])==guess)
        {
            hits++;
            guessed[i] = guess;
        }
    }
    for ( int i = 0; i < len; i++){
        printf("%c",guessed[i]);
    }
    printf("Treffer = %d\n",hits);
    return 0;

} 