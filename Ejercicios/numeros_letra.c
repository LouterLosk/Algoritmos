#include <stdio.h>

/*Escriba un algoritmo que acepte un numero, luego una letra.
Si la letra que sigue al numero es F, el programa tratara al numero introducido como una temperatura en grados convertirá el numero a los grados Celsius equivalentes y desplegara un mensaje adecuado.
Si la letra que sigue al numero es C, el programa tratara al numero introducido como una temperatura en Celsius convertirá el numero a los grados Fahrenheit equivalentes y desplegara un mensaje adecuado.
Si la letra no es F ni C, el algoritmo imprimirá el mensaje que los datos introducidos son incorrectos y termin
Se debe verificar que el numero ingresado sea mayor a cero.*/


void main(){
    float temp,far,cels;
    char tipo;
    printf("Ingrese la temperatura: ");
    scanf("%f",&temp);
    printf("Ingrese el tipo de temperatura: ");
    scanf("%s",&tipo);
    if (temp > 0){
         switch (tipo)
            {
            case 'F':
            case 'f':
                cels = (temp - 32)*5/9;
                printf("La temperatura de %f Fahrenheit es igual a %f Celcius\n",temp,cels);
                break;
            case 'C':
            case 'c':
                far = (temp * 9/5)+32;
                printf("La temperatura de %f Celcius es igual a %f Fahrenheit\n",temp,far);
                break;
            default:
                printf("Datos introducidos son incorrectos"); 
                break;
            }
    
    } 
}