#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONGITUD 100000

#define NUM_JUGADORES 10

typedef struct {

   int posicion;

   char nombre[20];

   int puntaje;

} Jugador;

int main()

{
    // Hola compañeritos de clase voy a poner comentarios como este para que no se me olvide que es cada cosa :V
    int dificultad = 1, puntaje = 0, ronda, extra;
    int finalizar = 0;
    int random = 10000;
    char nombreJugador[20];
   
    while(finalizar!=1){
        int continuar, vidas = 3;
        char secuencia[LONGITUD];
        char respuestas[LONGITUD];
        int aciertos = 0;
        random++;
        ronda = dificultad;
        srand(random);
        dificultad++;
        if (dificultad == 15) {
            dificultad--;
        }
        for(int i = 0; i < dificultad; i++) {
            int num = rand() % dificultad + 1;
            switch(num) {
                case 1:
                    secuencia[i] = 'A';
                    break;
                case 2:
                    secuencia[i] = 'B';
                    break;
                case 3:
                    secuencia[i] = 'C';
                    break;
                case 4:
                    secuencia[i] = 'D';
                    break;
                case 5:
                    secuencia[i] = 'E';
                    break;
                case 6:
                    secuencia[i] = 'F';
                    break;
                case 7:
                    secuencia[i] = 'G';
                    break;
                case 8:
                    secuencia[i] = 'H';
                    break;
                case 9:
                    secuencia[i] = 'I';
                    break;
                case 10:
                    secuencia[i] = 'J';
                    break;
                case 11:
                    secuencia[i] = 'K';
                    break;
                case 12:
                    secuencia[i] = 'L';
                    break;
                case 13:
                    secuencia[i] = 'M';
                    break;
                case 14:
                    secuencia[i] = 'N';
                    break;
                case 15:
                    secuencia[i] = 'O';
                    break;
            }
        }
        dificultad--;
        if (dificultad == 15) {
            extra = ronda - 15;
            for(int i = 0; i<extra; i++){
                dificultad++;
            }
        }
        printf("===== JUEGO DE MEMORIA =====\n");
        printf("Memoriza esta secuencia:\n");
        printf("Ronda %d\n", ronda);
        for(int i = 0; i < dificultad; i++)
        {
            printf("%c \n", secuencia[i]);
        }
        printf("Ingrese un 1 para continuar cuando estes listo.\n");
        scanf("%d", &continuar);
        for(int i = 0; i<30; i++)printf("\n");
    
        
        printf("\n\nIngresa los simbolos en el mismo orden presentado:\n");
    
        for(int i = 0; i < dificultad; i++)
        {
            printf("Simbolo %d: ", i + 1);
            scanf(" %c", &respuestas[i]);
        }
        for(int i = 0; i<30; i++)printf("\n");
        for(int i = 0; i < dificultad; i++)
        {
            if(respuestas[i] == secuencia[i])
            {
                printf("Simbolo %d correcto: %c\n", i + 1, respuestas[i]);
                aciertos++;
            }
            else
            {
                printf("Simbolo %d incorrecto, deberia ser %c\n", i + 1, secuencia[i]);
                vidas--;

            }
        }
        printf("Has acertado %d/%d\n", aciertos, dificultad);
        printf("Te quedan %d vidas\n", vidas);
        puntaje = puntaje + (aciertos*1000);
        if (vidas == 0) {
            printf("Has perdido todas tus vidas. Fin del juego.\n");
            finalizar = 1;
        }else{
            printf("Tu puntaje actual es: %d\n", puntaje);
            printf("Deseas finalizar el juego? (1 para finalizar, 0 para siguiente ronda): \n");
            scanf("%d", &finalizar);  
            dificultad++; 
        }
        

    }
    

    printf("\nIngresa tu nombre para la tabla de puntaciones: ");
    scanf("%s", nombreJugador); 

    // Esto es una lista de los jugadores 
    Jugador lista[NUM_JUGADORES] = {
        {1, "ALEX", 340000},
        {2, "MARIA", 280000},
        {3, "CARLOS", 220000},
        {4, "SOFIA", 180000},
        {5, "LUIS", 140000},
        {6, "ANA", 100000},
        {7, "PABLO", 75000},
        {8, "ELENA", 50000},
        {9, "DANIEL", 25000},
        {10, "", 0} 
    };

    // coloca al jugador actual en la última posición temporalmente
    strcpy(lista[9].nombre, nombreJugador);
    lista[9].puntaje = puntaje;

    // ordena la lista de mayor a menor puntaje 
    for(int i = 0; i < NUM_JUGADORES - 1; i++) {
        for(int j = 0; j < NUM_JUGADORES - i - 1; j++) {
            if(lista[j].puntaje < lista[j + 1].puntaje) {
                Jugador temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }

    // reasigna las posiciones del 1 al 10, para que suba si es mayor puntuacion
    for(int i = 0; i < NUM_JUGADORES; i++) {
        lista[i].posicion = i + 1;
    }

    // 
    printf("\n=========================================\n");
    printf("              LEADERBOARD                \n");
    printf("=========================================\n");
    printf(" POS |     PLAYER NAME   |    PUNTAJE    \n");
    printf("-----------------------------------------\n");
    for(int i = 0; i < NUM_JUGADORES; i++) {
        printf(" %2d  | %-17s |    %-8d   \n", lista[i].posicion, lista[i].nombre, lista[i].puntaje);
    }
    printf("=========================================\n\n");

   return 0;

}
 