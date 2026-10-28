#include <stdio.h>
#include "operaciones.h"// libreria personalizada

int sumar(int a, int b){
    return a+b;
}
int calcularAreaCuadrado(int lado){
    return lado * lado;
}
void mostrarVector(int v[], int tam){
    printf("[ ");
    for(int i = 0; i<tam; i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}
int main (){
    int resultadoSuma = sumar(10, 5);
    int area = calcularAreaCuadrado(4);
    int misDatos[3] = {10,20,30};
    printf("La suma es: %d\n", resultadoSuma);
    printf("El area del cuadrado es: %d\n", area);
    printf("Mostrando vector usando tu libreria:\n");
    mostrarVector(misDatos, 3);
    return 0;
}