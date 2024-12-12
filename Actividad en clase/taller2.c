/*
2.En un depósito se reciben 10 barriles de lubricantes para una fábrica de rulemanes y
 se desea conocer el volumen total que ocuparán. 
 Existen 4 tipos de barriles (de 25, 40, 50 y 100 litros) que se identifican con A, B, C y D, respectivamente.
*/

#include<stdio.h>

//se define las constantes de los bariles
#define A 25
#define B 40
#define C 50
#define D 100

void main()
{

    //Definir variabls
    int total=0;
    int i; //contador 
    char TipoBarril;//varible del tipo de barril

for (i=1 ;i<=10;i++){
    //se ingresa el tipo de barriles
    printf("Ingrese el tipo de barril %d: \n",i);
    printf("A B C D");
    scanf(" %c",&TipoBarril);


    switch (TipoBarril)
    {
    case 'A':
     case 'a':
     //se suma la constante a total
        total += A;
        break;
    case 'B':
    case 'b':
     //se suma la constante a total
        total += B;
        break;
    case 'C':
    case 'c':
     //se suma la constante a total
        total += C;
        break;
    case 'D':
    case 'd':
     //se suma la constante a total
        total += D;
        break;

    }
}
    printf("La suma de cada barril es de %d",total);
}

