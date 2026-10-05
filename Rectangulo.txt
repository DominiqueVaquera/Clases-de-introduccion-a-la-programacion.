#include <stdio.h>
int area(int altura, int base){
    return altura * base;
}
int perimetro(int altura, int base){
    return (altura*2)+(base*2);
}
int mostrar(float Resultado){
    printf("Resultado: %.2f\n", Resultado);
    return 0;
}
int main (){
    float Resultado;
    int altura,base,menu;
    do{
        printf("Seleccione la opcion\n");
        printf("1- Area\n");
        printf("2- Perimetro\n");
        printf("3- Salir\n");
        scanf("%d", &menu);
        switch (menu){
        case 1:
            printf("Ingrese la base del rectangulo\n");
            scanf("%d", &base);
            printf("Ingrese la altura del rectangulo\n");
            scanf("%d", &altura);
            Resultado = area(altura, base);
            mostrar(Resultado);
            break;
        case 2:
            printf("Ingrese la base del rectangulo\n");
            scanf("%d", &base);
            printf("Ingrese la altura del rectangulo\n");
            scanf("%d", &altura);
            Resultado = perimetro(altura, base);
            mostrar(Resultado);
            break;
        case 3:
            printf("Saliste");
        }
    }while(menu!=3);
    return 0;
}