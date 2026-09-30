#include <stdio.h>

int Par(int dividido, int numero, int prueba){
    printf("Dame un numero:\n");
    scanf("%d", &numero);
    printf("Numero: %d\n", numero);
    dividido = numero/2;
    prueba = dividido*2;
    if(prueba==numero){
        printf("Es par\n");
        return 1;
    }
    else{
        printf("Es impar\n");
        return 0;
    }
}
int Positivo(int numero){
    if (numero<0){
        printf("Es Negativo\n");
    }
    else if (numero>0){
        printf("Es positivo\n");
    }
    else{
        printf("Es neutro\n");
    }
    return 0;
}
int Absoluto(int numero){
    if (numero<0){
        numero= -1*numero;
    }
    printf("Valor absoluto: %d\n", numero);
    return 0;
}
int main (){
    int menu, numero, dividido, prueba;
    do{
        printf("Seleccione la accion\n");
        printf("1- Verificar si es par o impar\n");
        printf("2- Verificar si es positivo o negativo\n");
        printf("3- Calcular el valor absoluto\n");
        printf("4- Extra\n");
        printf("5- Salir\n");
        scanf("%d", &menu);
        switch (menu){
        case 1:
            Par(numero, prueba, dividido);
            break;
        case 2:
            printf("Dame un numero:\n");
            scanf("%d", &numero);
            Positivo(numero);
            break;
        case 3:
            printf("Dame un numero:\n");
            scanf("%d", &numero);
            printf("Numero: %d\n", numero);
            Absoluto(numero);
            break;
        case 4:
            printf("No se que poner ");
        }
    }while(menu!=5);
    return 0;
}