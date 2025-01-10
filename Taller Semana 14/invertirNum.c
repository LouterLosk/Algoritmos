#include <stdio.h>

/*Invertir un número
Escribe un programa que invierta un número ingresado por el usuario.
Ejemplo:
Entrada: 1234
Salida: 4321*/

int main(){
    int Num,residuo,invertido;
    int cont= 0;//Variable que nos ayuda a contar
    do//Este do repite el ingreso de numero hasta que sea valido
    {
        printf("Ingrese el numero que quiere voltear: ");
        scanf("%d",&Num);//Ingreso del numero a voltear
        //Validacion de que el numero es positivo
        if(Num > 0){
        for (int i = 0; Num > 0; i++)
        {
            //Se obtienen cada digito para invertirlo
            residuo = Num % 10;
            Num = Num / 10;
            invertido = invertido * 10;
            invertido = invertido + residuo;
        }
        printf("El numero invertido es %d", invertido);//Salida del numero invertido

    }
    else
    printf("El numero ingresado es invalido\n");     
    } while (Num < 0);
}