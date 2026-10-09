#include <stdio.h>
int suma(int a, int b){
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int multi(int a, int b){
    return a * b;
}
int divide(int a, int b){
    return a / b;
}
int main (){
    float Resultado;
    int a,b,menu;
    do{
        printf("Seleccione la opcion\n");
        printf("1- Suma\n");
        printf("2- Resta\n");
        printf("3- Multiplicacion\n");
        printf("4- Division\n");
        printf("5- Salir\n");
        scanf("%d", &menu);
        switch (menu){
        case 1:
            printf("Ingrese el primer numero\n");
            scanf("%d", &a);
            printf("Ingrese el segundo numero\n");
            scanf("%d", &b);
            printf("Resultado:\n");
            Resultado = suma(a, b);
            printf("%.2f\n", Resultado);
            break;
        case 2:
            printf("Ingrese el primer numero\n");
            scanf("%d", &a);
            printf("Ingrese el segundo numero\n");
            scanf("%d", &b);
            printf("Resultado:\n");
            Resultado = resta(a,b);
            printf("%.2f\n", Resultado);
            break;
        case 3:
            printf("Ingrese el primer numero\n");
            scanf("%d", &a);
            printf("Ingrese el segundo numero\n");
            scanf("%d", &b);
            printf("Resultado:\n");
            Resultado = multi(a,b);
            printf("%.2f\n", Resultado);
            break;
        case 4:
            printf("Ingrese el primer numero\n");
            scanf("%d", &a);
            printf("Ingrese el segundo numero\n");
            scanf("%d", &b);
            printf("Resultado:\n");
            Resultado = divide(a,b);
            printf("%.2f\n", Resultado);
            break;
        case 5:
            printf("Saliste");
        }
    }while(menu!=5);
    return 0;
}