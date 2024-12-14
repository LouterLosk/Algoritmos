/*1.En la universidad se registran los siguientes datos por alumnos:
 edad, cantidad de materias finales aprobadas y cantidad de materias fina-les desaprobadas. 
 Se necesita hallar y mostrar lo siguiente:
 1.Cantidad de alumnos mayores a 21 años de edad que tienen más de dos materias finales desaprobadas.
 2.Porcentaje de materias aprobadas y materias desaprobadas (por separado) de todxslxsalumnxs.
 3.Mostrar la edad de las personas que tienen el triple de materias aprobadas  con  respecto  a  las  que  desaprobaron.  (se  debe  hacer  mientras se efectúa el bucle)
*/
#include<stdio.h>

void main()
{
    //definir variables
    int NrAlumnos=0,contador=0;
    int edad,MateriasA,MateriasD;//Maerias apobadas,Materias desaprobadas
    int AlumDes=0;// cantidad de alumnos mayores a 21 años y que tengan mas de dos materias desaprobadas
    float porcentajeFinalA,porcentajeFinalD,NrMaterias;//Porcentaje final A aprobadas y d Desaprobadas
   
    //Ingresa la cantidad de alumnos 
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&NrAlumnos);

    do
    {
        //Preguntar la edad  
        do
        { 
            printf("Ingrese la edad: ");
            scanf("%d",&edad);
        }   
        while (edad < 0);
        //Preguntar la cantidad de materia aprobadas  
        do
        { 
            printf("Ingrese la cantidad de materias aprobadas: ");
            scanf("%d",&MateriasA); 
        }   
        while (MateriasA < 0);
        //Preguntar la cantidad de materia Desaprobadas
        do
        { 
            printf("Ingrese la cantidad de materias Desaprobadas: ");
            scanf("%d",&MateriasD);
        }   
        while (MateriasD < 0);
        
        //Cantidad de alumnos mayores a 21 años de edad que tienen más de dos materias finales desaprobadas
        if(edad >= 21 && MateriasD > 2)
        {
            AlumDes++;
        }

        //calculo de porcentajes 
        NrMaterias = MateriasA + MateriasD;
        porcentajeFinalA = ((float)MateriasA /NrMaterias )*100;
        porcentajeFinalD = ((float)MateriasD /NrMaterias)*100;


        printf("El porcentaje de materias aprobadas es de %.2f%% \n",porcentajeFinalA);
        printf("El porcentaje de materias desaprobadas es de %.2f%%\n",porcentajeFinalD);
        
        if (MateriasA == 3 * MateriasD)
        {
            printf("El alumno %d tiene el triple de materias aprobadas que desaprobadas y su edad es %d\n", contador + 1, edad);
        }
        contador ++;
    } while (contador != NrAlumnos);
    
    printf("\n\nLa cantidad de alumnos con mas de 21 años y mas de 2 materias desaprobadas es de %d.",AlumDes);
}
