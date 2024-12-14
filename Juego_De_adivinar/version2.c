#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main(){
//definir variables
    int random,seguir,contador;
    int num;//variable de ingreso
    seguir = 1;
    do
    {
        printf("¿Quires jugar?\n");
        printf("Si(1)    No(0)\n");
        scanf("%d",&seguir);
        if (seguir == 1)
        {
            do
            {   //calcular numero random
                srand(time(NULL));
                random=rand()%10;
                contador = 0;
                printf("Ingrese un numero del 0 al 10: ");
                scanf("%d",&num);
                if (num == random)
                //Ganaste
                {
                    printf("\nGanaste!!!!\n");
                    printf("Quieres volver a jugar?\n");
                    printf("Si(1)    No(0)\n");
                    scanf("%d",&seguir);
                }
                else
                //Perdiste
                {
                    printf("Perdiste =( \n");
                    printf("Vuelve a intentarlo\n\n");
                    contador++;
                }
            } while (contador != 3);
            
           
        
        } 
    }
     while (seguir != 0);
    
    
    
}