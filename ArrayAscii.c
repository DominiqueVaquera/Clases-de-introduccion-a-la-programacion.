#include <stdio.h>
char Ascii[10];
int carecteres[10];

int main (){

    for(int i =0;i<10;i++){
        printf("ingrese el caracter %d:\n ",i+1);
        scanf(" %c", &Ascii[i]);
    }
    for (int i = 0; i<10; i++){
        printf("El caracter %d: %c\n", i + 1, Ascii[i]);
    }
    for (int i =0; i<10;i++){
       carecteres[i] = (int)Ascii[i];
       printf("El valor %d: %d\n", i + 1, carecteres[i]);
    }
    return 0;
}