#include <stdio.h>
/*2. Se ingresa por teclado la cantidad de caramelos, chicles y chupete disponibles en un kiosko e pide: 

Determinar cuántos grupos de golosinas tienen más de 50 unidades. 
Mostrar en pantalla los nombres y las cantidades respectivamente de los grupos de más de 50 unidades. 
Sumar la cantidad mayores a 50 y hallar la incidencia de esa suma con el total, es decir que porcentaje representan cada valor con relación al total.
Si alguna de las cantidades es menor a 10 imprimir un mensaje indicando que debe verificar el stock. */


void main(){
    int caramelos,chicles,chupetes,sumaTotal;
    float Pcaramelos,Pchicles,Pchupetes;
    printf("Ingrese la cantidad de caramelos: ");
    scanf("%d",&caramelos);
    printf("Ingrese la cantidad de chicles: ");
    scanf("%d",&chicles);
    printf("Ingrese la cantidad de chupetes: ");
    scanf("%d",&chupetes);
    printf("\n");
    
    sumaTotal = 0;


    if (caramelos> 50||chicles> 50||chupetes> 50 ){
        printf("Los que tienen mas de 50 unides son: \n");
        if (caramelos > 50){
            printf("Caramelos %d \n",caramelos);
            sumaTotal = sumaTotal+caramelos;
        }
        if (chicles > 50){
            printf("chicles %d \n",chicles);
            sumaTotal = sumaTotal+chicles;
        }
        if (chupetes > 50){
            printf("Chupetes %d \n",chupetes);
            sumaTotal = sumaTotal+chupetes;
        }   
    }
    else if (caramelos< 10 || chicles< 10 || chupetes< 10 )
    {
        printf("Se debe verifical el stock");
    }
    printf("\n");
    //Calculo de porcentaje


    if (caramelos> 50||chicles> 50||chupetes> 50 && sumaTotal > 0){
         printf("La suma total es %d \n",sumaTotal);
        if (caramelos > 50){
            Pcaramelos = ((float)caramelos/(float)sumaTotal)*100;
            printf("Caramelos: %f porciento \n",Pcaramelos);
        }
        if (chicles > 50){
            Pchicles = ((float)chicles/(float)sumaTotal)*100;
            printf("Caramelos: %f porciento \n",Pchicles);
        }
        if (chupetes > 50){
            Pchupetes = ((float)chupetes/(float)sumaTotal)*100;
            printf("Caramelos: %f porciento \n",Pchupetes);
        }   
    }
    }