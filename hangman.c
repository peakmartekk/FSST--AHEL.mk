#include <stdio.h>

int main() 
{
    char secret = 'X';
    char guess = 'Y';

if (secret == guess) {
    printf("Richtig!");
}
else 
{
    printf("Fail!");
}
return 0;

}