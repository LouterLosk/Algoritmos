#include<stdio.h>



/*Suma de números primos:Elabore un programa que le pida al usuario, a través del teclado, 
un número positivo N menor que 100 y positivo. El sistema debe generar los números primos de 1 hasta N. 
Además, deben desplegar la cantidad de numero primos que existe en ese rango. (4ptos)*/


int primos(){
    int N;

    do
    {
        printf("Ingrese un numero que sea menor a 100 y positivo: ");
        scanf("%d",&N);
    } while (N>100 || N < 0);
    return 0;
}   

int main()
{
    primos();
    return 0;
}
