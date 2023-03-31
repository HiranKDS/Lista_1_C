#include <stdio.h>

int main(){
    int nume;

    printf("Digite um número inteiro: ");
    scanf("%d", &nume);
    
    if (nume % 2 == 0) {
        printf("%d é um número par.\n", nume);
    } 

    else {
        printf("%d é um número ímpar.\n", nume);
    }
    return 0;
}