#include <stdio.h>
int main(){
    int lado;
    float area = 0;
    printf("Ingrese el lado del cuadrado\n");
    scanf("%d", &lado);
    area = lado * lado * lado;
    printf("\nLa area es: %.2f", area);
    return 0;
}