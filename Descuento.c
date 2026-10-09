#include <stdio.h>
int main(){
    int precioOriginal;
    float descuento = 0;
    float preciofinal = 0;
    printf("Ingrese el precio de su producto\n");
    scanf("%d", &precioOriginal);
    descuento = precioOriginal*23/100;
    preciofinal = precioOriginal-descuento;
    printf("\nEl precio original es: %d$", precioOriginal);
    printf("\nDescuento aplicado: %.2f$", descuento);
    printf("\nEl precio total con descuento: %.2f$", preciofinal);
    return 0;
}