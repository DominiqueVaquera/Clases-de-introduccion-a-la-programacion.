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
int Pitagoras(int CatetoA, int CatetoB, float CatetoC, float Resultado){
    Resultado = 0;
    CatetoC = ((CatetoA*CatetoA) + (CatetoB*CatetoB));
    Resultado = CatetoC/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    Resultado = (Resultado + (CatetoC / Resultado))/2;
    printf("%d, %d", CatetoA, CatetoB);
    printf("\nEl cateto c2 del triangulo rectangulo es: %.2f\n", Resultado);
}
int main (){
    int menu, numero, dividido, prueba;
    int CatetoA;
    int CatetoB;
    float CatetoC, Resultado = 0;
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
            printf("Dame el Cateto A de un triangulo\n");
            scanf("%d", &CatetoA);
            printf("Dame el Cateto B\n");
            scanf("%d", &CatetoB);
            Pitagoras(CatetoA, CatetoB, Resultado, CatetoC);
            break;
        }
    }while(menu!=5);
    return 0;
}
