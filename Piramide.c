#include <stdio.h>

int Piramide(int numero, int fila, int i){
    for (i = 0; i <= numero; i++) {
        printf("\n");
        for (i = 0; i <= fila; i++){
            printf("*");
        }
        fila = fila+1;
    }
}
int main (){
    int numero, i;
    int fila = 0;
    printf("Ingrese un numero y se mostrara esa cantidad en asteristicos\n");
    scanf("%d", &numero);
    Piramide(numero, fila,i);
    return 0;
}