
/*Realizar un programa en C que resuelva el siguiente problema: En un bosque se necesita saber el 
promedio de diametro de cada tronco de cipres y el promedio de su altura. 
El proceso termina cuando el usuario responde con una N, mientras tanto, debe responder con S.
*/
#include <stdio.h>
//Define variables
void main(){
char Repeat;
float Diameter,Height;
float SumaDiameter=0;
float SumaHeight=0;
int counter=0;
//Start loop
do{
    //Request to enter the diameter
    // Input Data
    printf("Ingrese el diametro del tronco en centimetros: ");
    scanf("%f",&Diameter);
    //Request to enter the height
    printf("Ingrese la altura del tronco en metros: ");
    scanf("%f",&Height);
    //Add the values of the counters 
    SumaDiameter += Diameter;
    SumaHeight += Height;
    counter++;
    //Ask if the user wants to join another trunk
    printf("¿Desea Ingresar otro tronco? (S=SI/N=NO)\n");
    scanf(" %c",&Repeat);
    }while (Repeat == 's'|| Repeat =='S');
    
    if (counter>0){
        //Output Data
        printf  ("\n El promedio de diametro de los troncos es: %.2f\n", SumaDiameter/counter);
        printf  (" El promedio de altura de los troncos es: %.2f\n", SumaHeight/counter);
    }
    else{
        printf("\n No se ingresó datos\n ");
    } 
}