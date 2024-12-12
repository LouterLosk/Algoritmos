#include <stdio.h>
/*Simulador de préstamos: Crea un programa que simule un sistema de préstamos. 
El usuario ingresa el monto del préstamo y el número de meses para el pago. 
Si el monto es mayor a $10,000, aplica una tasa de interés del 15%; si es menor, aplica un 10%. 
Calcula el pago mensual con la tasa de interés aplicada. */

void main()
{
    int meses,monto;
    float pagoM,interes,montof;
    printf("Ingrese el monto del prestamo: ");
    scanf("%d",&monto);
    printf("Ingrese el número de meses para el pago: ");
    scanf("%d",&meses);
    //calculo del interes
    if (monto < 10000){
        interes = monto * 0.10;
        monto = interes + monto;
    }
    else{
        interes = monto * 0.15;
        montof = interes + monto;
    }
    pagoM = montof/12;
    printf("El pago mensual que debe hacer por %d meses.Es de %f",meses,pagoM);
}
