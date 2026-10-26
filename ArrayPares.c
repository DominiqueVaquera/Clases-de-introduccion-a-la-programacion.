#include <stdio.h>
int enteros[8];
int par[8];
int impar[8];
int main (){
    float EsPar, dividido, prueba, pares, impares;
    for(int i =0;i<8;i++){
        printf("ingrese el numero entero %d: ",i+1);
        scanf("%d", &enteros[i]);
    }
    for (int i = 0; i<8; i++){
        printf("El numero entero %d: %d\n", i + 1, enteros[i]);
    }
    for (int i =0; i<8;i++){
        dividido = enteros[i]/2;
        prueba = dividido*2;

        if(prueba==enteros[i]){
            printf("\nNumero: %d", enteros[i]);
            printf(" Es par");
            pares = pares + 1;
            for (int i = 0; i<pares; i++){
                par[i] = enteros[i];
            }
        }
        else{
            printf("\nNumero: %d", enteros[i]);
            printf(" Es impar");
            impares = impares + 1;
            for (int i = 0; i<impares; i++){
                impar[i] = enteros[i];
            }
        }
    }
    return 0;
}