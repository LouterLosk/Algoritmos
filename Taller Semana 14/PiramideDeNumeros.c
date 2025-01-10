#include <stdio.h>

/*Pirámide de números
Escribe un programa que imprima una pirámide de números con n filas.
Ejemplo:
Entrada: n=4
Salida:
1
121
12321
1234321*/

int main()
{
    int N;//Variable del numero que se va a ingresar 
    do
    {
    printf("Ingrese el numero de filas: ");
    scanf("%d",&N);//Ingreso de datos
    } while (N < 0);

    for (int i = 1 ; i <= N ; i++){

        //imprime numeros acendentes 
        for (int j = 1 ; j <= i ; j++){
            printf("%d",j);//Salida de los numeros
        }
        //imprime numeros decendentes 
        for (int j = i-1 ; j >= 1 ; j--){
            printf("%d",j);//Salida de los numeros
        }
        //se agrega un espacio entre filas
        printf("\n");

    }
    return 0;
}

