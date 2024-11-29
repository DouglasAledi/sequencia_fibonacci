#include <stdio.h>

int numero, a, b, resultado, i;

int main(){

    resultado = 0;
    a = 0;
    b = 1;

    printf("Insira aqui seu número: ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i++)
    {
        printf("\n%d", resultado);
        resultado = a + b;
        b = a;
        a = resultado;
    }
    

    return 0;
}