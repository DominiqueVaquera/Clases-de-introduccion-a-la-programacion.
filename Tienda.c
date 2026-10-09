#include <stdio.h>
int main(){
    int cantidadVideojuegos;
    float precio;
    float precioOriginal, iva, descuento, PrecioConDescuento, preciofinal;
    printf("Ingrese la cantidad de videojuegos N que va a comprar\n");
    scanf("%d", &cantidadVideojuegos);
    printf("Ingrese el precio indicado\n");
    scanf("%f", &precio);
    precioOriginal = cantidadVideojuegos*precio;
    descuento = precioOriginal*0.15;
    iva = precioOriginal*0.16;
    preciofinal = (precioOriginal-descuento)+iva;
    printf("\nEl precio del videojuego individual: %.2f$", precio);
    printf("\nLa cantidad de unidades compradas: %d", cantidadVideojuegos);
    printf("\nDescuento aplicado: -%.2f$", descuento);
    printf("\nIva: %.2f$", iva);
    printf("\nEl precio total con descuento e iva: %.2f$", preciofinal);
    return 0;
}