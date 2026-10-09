#include <stdio.h>
int main (){
    char inicial;
    float Parcial1;
    float Parcial2;
    float Parcial3;
    float Promedio = 0;
    printf("Ingrese su inicial \n");
    scanf("%c", &inicial);
    printf("Ingrese la calificaion del parcial 1 \n");
    scanf("%f", &Parcial1);
    printf("Ingrese la calificaion del parcial 2\n");
    scanf("%f", &Parcial2);
    printf("Ingrese la calificaion del parcial 3\n");
    scanf("%f", &Parcial3);
    Promedio = (Parcial1+Parcial2+Parcial3)/3;
    printf("Inicial es: %c, Calificacion Final: %.2f", inicial, Promedio);
    return 0;
}