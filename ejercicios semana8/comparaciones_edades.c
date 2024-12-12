#include <stdio.h>

//Comparador de edades: Escribe un programa que pida la edad de tres personas y determine quién es la mayor. 

int main(){
    int Edad1,Edad2,Edad3,mayor;
    printf("Ingrese la edad de tres personas\n");
    printf("Ingrese la primera edad: ");
    scanf("%d",&Edad1);
    printf("Ingrese la segunda edad: ");
    scanf("%d",&Edad2);
    printf("Ingrese la tercera edad: ");
    scanf("%d",&Edad3);

    //determine quién es la mayor
    if (Edad1 > Edad2){
        mayor = Edad1;
        printf("\nLa primera persona tiene la edad mayor.");
    } 
    else{
        if (Edad2 > Edad3){
        mayor = Edad2;
        printf("\nLa segunda persona tiene la edad mayor.");
        }
            else{
                 mayor = Edad3;
                 printf("\nLa Tercera persona tiene la edad mayor.");
            }
    }
}