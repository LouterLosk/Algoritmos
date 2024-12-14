#include <stdio.h>
/*Imprima  la  cantidad  de  mujeres  mayores  de  edad 
 y  la  cantidad  de  hombres  mayores  de  edad  de  un  total  de  N  personas.  
 Muestre  también sus porcentajes*/


void main()
{
    int NrPersonas,edad,IMens=0,IWomans=0,contador = 0;
    float PorcentajeH,PorcentajeM;
    char genero;
    printf("Ingrese la cantidad de personas:");
    scanf("%d",&NrPersonas);
    while (NrPersonas != contador)
    {
      printf("Ingrese la edad:");
        scanf("%d",&edad);
        printf("Ingrese el genero:");
        scanf(" %c",&genero);
        if(edad >= 18){
            switch (genero)
            {
            case 'm':
            case 'M':
                IMens++;
                break;
            
            case 'F':
            case 'f':
                IWomans++;
                break;
            }
        }
    contador++;  
    }
    
    //calculo porcentaje
    PorcentajeH = ((float)IMens / (float)NrPersonas)*100;
    PorcentajeM = ((float)IWomans / (float)NrPersonas)*100;

    printf("La cantidad de hombres mayores a 18 años es de %d y el porcentaje es de %.2f\n",IMens,PorcentajeH);
    printf("La cantidad de mujeres mayores a 18 años es de %d y el porcentaje es de %.2f",IWomans,PorcentajeM);
}

