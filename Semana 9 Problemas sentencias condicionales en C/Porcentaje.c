#include <stdio.h>

main()
{
    int NrPersonas,edad,IMens,IWomans,contador;
    char genero;
    printf("Ingrese la cantidad de personas");
    scanf("%d",&NrPersonas);
    do
    {
        contador++;
        printf("Ingrese la edad");
        scanf("%d",&edad);
        printf("Ingrese el genero");
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
    } while (NrPersonas != contador);
    printf("La cantidad de hombres mayores a 18 años es de %d",IMens);
    printf("La cantidad de mujeres mayores a 18 años es de %d",IWomans);
}






