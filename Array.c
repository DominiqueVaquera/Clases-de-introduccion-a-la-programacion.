#include <stdio.h>
int enteros[5];
int main (){
    float cal1,cal2,cal3,cal4,cal5;
    float Promedio[5];
    float promedio;
    Promedio[0]=0;
    Promedio[1]=0;
    Promedio[2]=0;
    Promedio[3]=0;
    Promedio[4]=0;
    for(int i =0;i<5;i++){
        printf("ingrese el numero entero %d: ",i+1);
        scanf("%d", &enteros[i]);
    }
    //printf("Los numeros ingresados son: %d", temperatura);
    for (int i = 0; i<5; i++){
        printf("El numero entero %d: %d\n", i + 1, enteros[i]);
    }

    for (int i =0; i<5;i++){
        printf("Ingrese la calificacion %d: ", i + 1);
        scanf("%f", &Promedio[i]);
    }
    for (int i =0; i<5;i++){
        printf("La calificacion %d: %.2f\n", i + 1, Promedio[i]);
    }
    promedio = 0;
    for(int i =0;  i < 5; i++){
        promedio +=Promedio[i];
    }
    promedio /= 5;
    printf("Promedio: %.2f\n", promedio);
    if (promedio>=7){
        printf("Aprobo el alumno");
    }
    else{
        printf("Reprobo el alumno");
    }
    return 0;
}