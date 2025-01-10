#include <stdio.h>

/*Invertir un número
Escribe un programa que invierta un número ingresado por el usuario.
Ejemplo:
Entrada: 1234
Salida: 4321*/

int main(){
    int Num,residuo,invertido,cont=0;
    printf("Ingrese el numero que quiere voltear: ");
    scanf("%d",&Num);
    if(Num > 0){
        for (int i = 0; Num > 0; i++)
        {
            residuo = Num % 10;
            Num = Num / 10;
            invertido = invertido * 10;
            invertido = invertido + residuo;
        }
        printf("El numero invertido es %d", invertido);

    }
    else
    printf("El numero ingresado es invalido");
}