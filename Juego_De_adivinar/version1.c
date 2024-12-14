#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void main(){
//definir variables
    int random,seguir,contador;
    int num;//variable de ingreso
    seguir = 1;
    
        printf("¿Quires jugar?\n");
        printf("Si(1)    No(0)\n");
        scanf("%d",&seguir);
        if (seguir == 1)
        {
            //calcular numero random
            srand(time(NULL));
            random=rand()%10;
            contador = 0;
            do
            {
                printf("Ingrese un numero del 0 al 10: ");
                scanf("%d",&num);
                if (num == random)
                {
                    printf("\nGanaste!!!!\n");
                    contador =5;
                }
                else
                {
                    printf("Perdiste =( \n");
                    printf("Vuelve a intentarlo\n\n");
                    contador++;
                }
            } while (contador != 3 );
            
           
        
        } 
}
     
    
