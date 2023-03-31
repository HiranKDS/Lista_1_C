#include <stdio.h>

int main() {
    char le;

    printf("Digite uma letra: ");
    scanf("%c", &le);
    if (le == 'a' || le == 'e' || le == 'i' || le == 'o' || le == 'u' ||
        le == 'A' || le == 'E' || le == 'I' || le == 'O' || le == 'U') {
        printf("%c é uma vogal.\n", le);
    } 

    else {
        printf("%c é uma consoante.\n", le);
    }
    return 0;
}