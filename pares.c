#include <stdio.h>
int main(){
    // Tienes 2 decimas extras
    int numero, dividido, prueba;
    printf("Dame un numero:\n");
    scanf("%d", &numero);

    dividido = numero/2;
    prueba = dividido*2;

    if(prueba==numero){
        printf("\nNumero: %d", numero);
        printf("\nEs par");
    }
    else{
        printf("\nNumero: %d", numero);
        printf("\nEs impar");
    }
    return 0;
}