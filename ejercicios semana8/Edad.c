
/*Clasificación de edades: Crea un programa que reciba la edad de una persona y 
    determine si es niño (0-12), adolescente (13-17), adulto (18-64) o adulto mayor (65+). */

#include <stdio.h>

void main(){
    int edad;
    printf("Ingrese la edad: ");
    scanf("%d",&edad);
    if (edad >= 0 && edad <= 12){
        printf("Es un niño: ");
    }
    else{
        if(edad >= 13 && edad <= 17){
            printf("Es un adolescente: ");
        }
        else{
            if(edad >= 17 && edad <= 64){
                  printf("Es un adulto: ");  
            }
            else{
                 printf("Es un adulto mayor: ");  
             }
        }
            
    }
}


    

