#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main(){
//definir variables
    int random,seguir;
    int num;//variable de ingreso
    printf("¿Quires jugar?\n");
    printf("Si(1)    No(0)\n");
    scanf("%d",&seguir);
    seguir = 1;
    if (seguir == 1)
    {
        //calcular numero random
        srand(time(NULL));
        random=rand()%10;
        printf("Ingrese un numero del 0 al 10: ");
        scanf("%d",&num);
        if (num == random)
        {
            printf("\nGanaste!!!!");
        }
        else
        {
            printf("\nPerdiste =( \n");
            printf("El numero era %d",random);
        }
        
    }
    
}
