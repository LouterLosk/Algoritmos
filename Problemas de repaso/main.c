#include <stdio.h>
#include "biblioteca.c"

/*Resolver los siguientes ejercicios.

Elabore un programa en C que despliegue un menú con las siguientes opciones: (1 pto) 

Suma de números primos:Elabore un programa que le pida al usuario, a través del teclado, 
un número positivo N menor que 100 y positivo. El sistema debe generar los números primos de 1 hasta N. 
Además, deben desplegar la cantidad de numero primos que existe en ese rango. (4ptos)

Sumar 50 números dados por teclado.
Si se detecta un número negativo, indicarlo y abandonar el bucle indicando cuántos valores se han leído hasta ese instante. (2 ptos)

Dados tres números determinar si la suma de cualquier pareja de ellos es igual al tercer número. Si se cumple esta condición escribir: “Existe relación” y mostrar la relación. De lo contrario escribir: “No se relacionan”. 
Por ejemplo, 3 9 6 sí tienen relación puesto que 6+3=9. (3 ptos) 
*/


int main()
{
    int eleccion;

    printf("Elija que programa quiere ejecutar\n");
    printf("1. Suma de numeros primos\n");
    printf("2. Suma 50 numeros\n");
    printf("3. Mostrar relación\n");
    scanf("%d",&eleccion);
    primos();
    return 0;
}
