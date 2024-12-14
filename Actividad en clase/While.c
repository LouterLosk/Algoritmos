/*Realizar un programa en C que permita acertar la edad de Matusalen(969) 
el programa debe indicar si es la respuesta correcta,
caso contrario indicar si es menor o mayor. 
Se debe permitir solo 3 intentos, 
si acierta dentro de los 3 intentos debe terminar el programa.*/

/*Al final del programa si no acertó se debe desplegar un mensaje de que lo intente nuevamente, 
Si dice si, se debe permitir repetir el programa.*/

#include <stdio.h>
//constante de la edad de Matusalen
#define edad 969

int main()
{
    //definir variables
    int Intento;//Variable de ingreso de datos de edad
    int contador;
    int seguir = 1;
    //explicacion del juego
    printf("Vamos a adivinar la edad de Matusalen\n");   
    printf("Solo tendas tres intentos\n\n"); 
        
    //Preguntar si quire jugar 
    printf("¿Quires jugar?\n");
    printf("Si(1)    No(0)\n");
    scanf("%d",&seguir);
    
    while (seguir == 1)
    {
        contador = 0;
        while (contador < 3)
        {
            //Pregunta la edad
            printf("Ingrese la edad: ");
            scanf("%d",&Intento);
            //Comprobar si gana 
            if (Intento == edad)
            {
                printf("\nGanaste!!!!\n");
                contador = 3;
            }
            else
                {
                    printf("Vuelve a intentarlo.\n\n");
                    //demostrar si la edad es mayor
                    if (Intento <edad)
                    {
                        printf("La edad es mas grande.\n");
                    }
                    else
                    {
                        //demostrar si la edad es menor
                        if (Intento > edad)
                        {
                            printf("La edad es mas pequña.\n\n");
                        }
                    }
                    contador++;   
                }
        }
        //Mensaje final si no se acierta la edad después de tres intentos
        if (contador == 3 && Intento != edad) 
        {
            printf("Lo siento, no acertaste. Inténtalo nuevamente.\n");
        }    
        //se pregunta si se quiere volver a jugar
        printf("¿Quires volver a jugar?\n");
        printf("Si(1)    No(0)\n");
        scanf("%d",&seguir); 
    }
    return 0;
}

