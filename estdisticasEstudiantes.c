/*Realizar un programa en C que muestre las estadísticas de notas de un grupo de N
estudiaste. Se debe mostrar:
* Mayor Nota (2 puntol)
* Menor nota (2 punto)
* Promedio de la clase (2 punto)
* Numero de estudiantes que aprobaron con mas de 7 (1 punto)
* Numero de estudiantes que reprobaron con menos de 7(1 punto)
Las notas ingresadas deben estar entre O y 10. Si el usuario ingresa una nota incorrecta el programa debe pedirle una nota correcta. (2 puntos)
Se debe subir el programa en C.*/

#include <stdio.h>

int main()
{   
    int Aprobados=0,Desaprobados=0;
    float promedioClase;
    float notaMayor,notaMenor = 10; 
    int NrStudents;//Ingreso el numero de estudiantes
    float Nota,Nota1;//Variable de ingreso nota
    int contador = 0; //Variable que nos ayuda a contar 
    printf("Cuantos estudiantes se van a ingresar: ");   
    scanf("%d",&NrStudents);


    do
    {
        
        do
        {
            printf("Ingrese la Nota del estudiante %d: ",contador + 1);
            scanf("%f",&Nota);
            //validar si la nota esta en el rango dterminado 0-10
            if (Nota >= 0 && Nota <= 10)
            {
                //Comprobar si esta aprobado
                if (Nota >= 7)
                {
                    Aprobados ++;
                    promedioClase += Nota;
                }
                else
                {
                    Desaprobados++;
                    promedioClase += Nota; 
                }
                //comprobar nota mayor 
                  if (notaMayor < Nota)
                    {
                        notaMayor = Nota;                        
                    }
                //comprobar nota menor 
                    if (notaMenor > Nota)
                    {
                        notaMenor = Nota;                        
                    }
                    contador ++;
            }
            else
            {
                printf("La nota debe ser entre 0 y 10\n"); 
            }

        } while (Nota < 0 || Nota > 10);
    } while (NrStudents != contador);
    printf("La cantidad de estudiantes apobados es de %d\n",Aprobados );
    printf("La cantidad de estudiantes desaprobados es de %d\n",Desaprobados );
    printf("El promedio de la clase es de %.2f\n",(promedioClase / (float)NrStudents));
    printf("La nota mayor es %.2f\n",notaMayor);
    printf("La nota menor es %.2f",notaMenor);

    
    return 0;
}
