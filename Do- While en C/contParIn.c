#include <stdio.h>


/*Realizar un programa en c que cuente la cantidad de veces que se ingresan números pares 
y la cantidad de números impares hasta que se ingrese un número negativo. 
El cero no se cuenta.*/

int main()
{
    //Espesificar variables
    //Valores inciales de los contadores
    int pares = 0, impares = 0;
    int cont = 1;
    int num,mod;
    
    do//Controla que el valor ingresado sea positivo
    {
        do//Contrala que el valor ingresado no sea 0
        {
            printf("Ingrese el el numero %d: ",cont);
            scanf("%d",&num); //Recolecta el numero
        } while (num == 0); 
        mod = num % 2;   //Uso del mod 2 ya que si es par da 0 y si es impar da 1
        if (mod == 1&& num > 0 ){    //se controla el tipo de dato que se ingreso
            impares ++;
        }
        else{
            if (mod == 0 && num > 0 )
            {
                pares++;  
            }
        }
        cont++;
    } while (num >0);
    printf("De %d numeros\n",cont - 1);//La salida de datos con la cantidad de datos ingresado y la cantidad de pares e impares
    printf("La cantida de numeros pares fue de %d y de numero impares fue de %d",pares,impares);
    return 0;
}
