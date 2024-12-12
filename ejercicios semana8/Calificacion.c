#include <stdio.h>
/*Calificación escolar: Diseña un programa que tome una calificación numérica y
 devuelva el equivalente en letras (A, B, C, D, F) basándose en rangos. */


void main()
{
    int nota;
    printf("Ingrese la nota: ");
    scanf("%d",&nota);

    if (nota == 10 && nota >= 9){
        printf("La nota A");
        }
    else{
        if (nota <9 && nota >=8){
        printf("La nota B");
        }
        else{
            if (nota <8 && nota >=7){
            printf("La nota c");
            }
            else{
                if (nota <7 && nota >=6){
                    printf("La nota D");
                    }
                    else{
                        printf("La nota F");
                        }
                 }
        }
        }
    
}
