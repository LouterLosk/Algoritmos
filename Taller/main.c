#include <stdio.h>
#define Kilometro 6
/*
1.	Solicita al usuario la distancia del viaje (en kilómetros) y calcula el costo del boleto con base en una tarifa por kilómetro. 
2.	Pide el monto que paga el usuario y calcula el cambio. 
3.	Devuelve el cambio en monedas de 5, 2 y 1 peso. 
4.	Muestra un resumen con el costo del boleto, el monto pagado y el cambio entregado. 
*/

int main()
{
    int distancia;
    int costo = 0 ;
    int ingreso = 0;
    int vuelto = 0;
    do
    {
        printf("El costo por kilometro es de 6 pesos\n"); 
        printf("Ingrese la distancia del viaje(en kilómetros): \n");
        scanf("%d",&distancia);
    } while (distancia <= 0);
    costo = distancia * Kilometro;
    printf("El valor del viaje es de %d\n",costo);
    do
    {
        printf("Con cuanto va a pagar?\n");
        scanf("%d",&ingreso);
    } while (ingreso < 0);
    vuelto = ingreso - costo;
    printf("Su vuelto es de %d",vuelto);
    

   

    
    return 0;

   
}
