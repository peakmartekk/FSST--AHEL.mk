#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;
    
    printf("Gib eine Zahl ein:\n");
    scanf("%d", &a);
    
    if (a == b) {
        printf("Diese Zahl ist gleich gross wie die Konstante.\n");
    } 
    else if (a > b) {
        printf("Diese Zahl ist groesser als die Konstante.\n");
    } 
    else {
        printf("Diese Zahl ist kleiner als die Konstante.\n");
    }
    
    return 0;
}