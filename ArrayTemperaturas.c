#include <stdio.h>
float Celsius[5];
int main (){
    float fahrenheit;
    float menor = 10000;
    float mayor;
    int dia = 0;
    int dia2 = 0;
    float temperatura[5];
    temperatura[0]=0;
    temperatura[1]=0;
    temperatura[2]=0;
    temperatura[3]=0;
    temperatura[4]=0;
    mayor=0;
    for (int i =0; i<5;i++){
        printf("Ingrese la temperatura %d: ", i + 1);
        scanf("%f", &temperatura[i]);
    }
    for (int i =0; i<5;i++){
        Celsius[i] = (temperatura[i]-32)/1.8;
    }
    for (int i =0; i<5;i++){
        printf("La temperatura en celsius del dia %d: %.2f\n", i + 1, Celsius[i]);
    }
    for (int i =0; i<5;i++){
        if (Celsius[i]>mayor){
            mayor = Celsius[i];
            dia = i+1;
        }
    }
    for (int i = 0; i<5; i++){
        if (Celsius[i]<menor){
            menor = Celsius[i];
            dia2 = i;
        }
    }
    printf("El dia mas caloroso fue el: %d con %.2f\n", dia, mayor);
    printf("El dia mas frio fue el: %d con %.2f", dia2, menor);

    return 0;
}