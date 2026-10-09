#include <stdio.h>
int DanoJugador(int VidaEnemigo){
    return VidaEnemigo-(25-8);
}
int Curar(int VidaJugador){
    for(int i =0; i < 20; i++){
        VidaJugador = VidaJugador+1;
        if (VidaJugador>=100){
            i = 20;
        }
    }
    return VidaJugador;
}
int DanoEnemigo(int VidaJugador){
    return VidaJugador-(25-10);
}
int main (){
    int menu;
    int VidaEnemigo = 120;
    int VidaJugador = 100;
    do{
        printf("Vida del jugador: %d\n", VidaJugador);
        printf("Ataque del jugador: 25\n");
        printf("Defensa del jugador: 10\n");
        printf("Vida del enemigo: %d\n", VidaEnemigo);
        printf("Ataque del enemigo: 20\n");
        printf("Defensa del enemigo: 8\n\n");
        printf("Seleccione la accion\n");
        printf("1- Atacar\n");
        printf("2- Curar\n");
        printf("3- Huir\n");
        scanf("%d", &menu);
        switch (menu){
        case 1:
            VidaEnemigo = DanoJugador(VidaEnemigo);
            printf("Haz hecho 17 de dano al enemigo\n");
            VidaJugador = DanoEnemigo(VidaJugador);
            printf("El enemigo te ha infligido 15 de dano\n");
            break;
        case 2:
            if (VidaJugador<100){
                VidaJugador = Curar(VidaJugador);
                printf("Te curaste 20 puntos de vida\n");
            }else{
                printf("No puedes curarte mas alla de tu vida maxima 100\n");
            }
            VidaJugador = DanoEnemigo(VidaJugador);
            printf("El enemigo te ha infligido 15 de dano\n");
            break;
        case 3:
            printf("Huiste exitosamente\n");
            break;
        }
        if (VidaEnemigo <= 0){
            printf("La vida del enemigo ha llegado a 0");
            printf("Felicidades!!! Ganaste el combate\n");
            menu = 3;
        }
        else if (VidaJugador<=0)
        {
            printf("Tu vida ha llegado a 0\n");
            printf("GAME OVER\n");
            menu = 3;
        }
    }while(menu!=3);
    return 0;
}