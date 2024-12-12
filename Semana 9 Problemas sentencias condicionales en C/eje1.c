#include <stdio.h>

void main()
{
    int Bancas, Estudiantes, falta, sobra;
    printf("Ingrese la cantidad de estudiantes que hay en el aula: ");
    scanf("%d",&Estudiantes);
    printf("Ingrese la cantidad de bancas que hay en el aula: ");
    scanf("%d",&Bancas);
    //proceso
    falta = Estudiantes-Bancas;
    sobra = Bancas-Estudiantes;
    if (Bancas > Estudiantes){
        printf("Hay las bancas suficientes para todos estudiantes en el aula y sobran %d bancas",sobra);
    }
    else{
        printf("Faltan %d bancas",falta);
    }

	
}
