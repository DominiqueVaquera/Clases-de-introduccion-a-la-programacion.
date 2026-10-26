#include <stdio.h>
int numeros[10];
int main (){
    int mayor, acum, buscar, ninguno;
    int menor = 100000;
    mayor =0;
    for(int i =0;i<10;i++){
        printf("ingrese el numero entero %d: \n",i+1);
        scanf("%d", &numeros[i]);
    }
    for(int i =0;i<10;i++){
        printf("Numero ingresado %d: %d\n",i+1,numeros[i]);
    }
    for (int i = 0; i <10; i++){
        if (numeros[i]>mayor){
            mayor = numeros[i];
        }
        if (numeros[i]<menor){
            menor = numeros[i];
        }
    }
    printf("Numero mayor: %d\n", mayor);
    printf("Numero menor: %d\n", menor);
    for(int i =0;i<10;i++){
        acum = acum + numeros[i];
    }
    printf("La suma total es: %d\n", acum);
    printf("ingrese un numero para buscarlo\n ");
    scanf("%d", &buscar);
    for (int i = 0; i < 10; i++){
        if(buscar == numeros[i]){
            printf("Si se encontro en la posicion: %d\n", i);
        }else{
            ninguno = ninguno + 1;
        }
    }
    if (ninguno==10){
        printf("No hay ninguno f");
    }
    
    for (int i = 9; i>=0; i--){
        printf("El numero entero en orden inverso %d: %d\n", i + 1, numeros[i]);
    }

    return 0;
}