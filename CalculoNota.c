#include <stdio.h>


//Definir variables
float NtPractica,NtProblemas,NtTeorico,PromedioFinal,Promedio;//Variables de ingreso
int Seguir,contadoAl;//variables 


void main(){

Seguir = 0;
contadoAl = 0;
    while (Seguir == 0)
    {
        contadoAl++;
        //Comprobar si la nota es valida
        do
        {
            printf("Ingrese la nota Practica: ");
            scanf("%f",&NtPractica);
            if (NtPractica > 10 || NtPractica < 0){
                printf("Debe ingresar una nota valida menor a 10 y mayor a 0");
            }            
        } while (NtPractica > 10 || NtPractica < 0);
        //Comprobar si la nota es valida
        do
        {
            printf("Ingrese la nota Problemas: ");
            scanf("%f",&NtProblemas);
            if (NtProblemas > 10 || NtProblemas < 0){
                printf("Debe ingresar una nota valida menor a 10 y mayor a 0");
            }            
        } while (NtProblemas > 10 || NtProblemas < 0);
        //Comprobar si la nota es valida
        do
        {
            printf("Ingrese la nota Teorica: ");
            scanf("%f",&NtTeorico);
            if (NtTeorico > 10 || NtTeorico < 0){
                printf("Debe ingresar una nota valida menor a 10 y mayor a 0");
            }            
        } while (NtPractica > 10 || NtPractica < 0);


        //Calculo de NtFinal
        NtPractica = NtPractica * 0.10;
        NtProblemas = NtProblemas * 0.50;
        NtTeorico = NtTeorico * 0.40;
        Promedio = NtPractica + NtProblemas + NtTeorico;
        printf("El pomedio es del alumno es %f\n",Promedio);
        PromedioFinal = Promedio + PromedioFinal;
        
        //Preguntar si quieres agregar mas alumno
        printf("¿Desea agregar otro alumno?\n");
        printf("Si(0)    No(1)\n");
        scanf("%d",&Seguir);
    }

    PromedioFinal = PromedioFinal / contadoAl;
    printf("El promedio de la clase es de %f",PromedioFinal);
    
    


}