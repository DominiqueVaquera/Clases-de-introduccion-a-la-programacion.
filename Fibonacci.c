#include <stdio.h>

int Fibonacci(int numero, int secuencia, int i, int secuencia2, int suma){
    secuencia = 0;
    secuencia2 = 1;
    printf("%d, ", secuencia);
    printf("%d, ", secuencia2);
    for (i = 0; i <= numero; i++) {
        suma = secuencia+secuencia2;
        secuencia = secuencia2;
        secuencia2 = suma;
        printf("%d, ", secuencia2);
    }
}
int main (){
    int numero, i, suma;
    int secuencia = 0;
    int secuencia2 = 1;
    printf("Ingrese un numero y se mostrara esa cantidad en la espiral de fibonacci\n");
    scanf("%d", &numero);
    Fibonacci(numero, secuencia, secuencia2,i, suma);
    return 0;
}
