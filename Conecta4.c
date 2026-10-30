#include <stdio.h>
#include <stdlib.h>
int Columnas = 7;
int Filas = 8;
char tablero [8][7];
int jugador = 1;
// iniciar el tablero
void iniciarTablero(char tablero[8][7]){
    for (int i =0; i< Filas;i++){
        for (int j =0;j<Columnas;j++){
            tablero[i][j] = ' ';
        }
    }
}
void mostrarTablero(){
    for (int i =0; i< Filas;i++){
        for (int j =0;j<Columnas;j++){
            printf("|%c", tablero[i][j]);
          
        }
        printf("|\n");
    }
}
void ponerFicha(char tablero[8][7]){
    int columna;
    if (jugador == 1) {
        printf("Jugador 1, Ingresa la columna donde quieres poner tu ficha (0-6): ");
        scanf("%d", &columna);
        // Validar la columna ingresada
        if (columna <0 || columna >= Columnas) {
            printf("Columna invalida. Intenta de nuevo.\n");
            return;
        } 
        for (int i = Filas - 1; i >= 0; i--) {
            if (tablero[i][columna] == ' ') {
                tablero[i][columna] = 'X';
                break;
            }
        }
        jugador = 2;
    } else {
        printf("Jugador 2, Ingresa la columna donde quieres poner tu ficha (0-6): ");
        scanf("%d", &columna);
        // Validar la columna ingresada
        if (columna <0 || columna >= Columnas) {
            printf("Columna invalida. Intenta de nuevo.\n");
            return;
        } 
        for (int i = Filas - 1; i >= 0; i--) {
            if (tablero[i][columna] == ' ') {
                tablero[i][columna] = 'O';
                break;
            }
        }
        jugador = 1;
    }
    
}
int main (){
    // iniciar el tablero
    int columna;
    iniciarTablero(tablero);
    mostrarTablero(tablero);
    for (int i = 0; i < 5; i++) {
        ponerFicha(tablero);
        mostrarTablero(tablero);

    }
 
    

}