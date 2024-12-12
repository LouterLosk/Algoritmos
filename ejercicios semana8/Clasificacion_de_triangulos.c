#include <stdio.h>
/*Crea un programa que solicite las longitudes de los tres lados de un triángulo. 
Luego, determina si el triángulo es equilátero, isósceles o escaleno, o si las longitudes no forman un triángulo válido
 (si un lado es mayor o igual a la suma de los otros dos).*/

 int main(){
    int Lado1,Lado2,Lado3;
    printf("Ingrese las longitudes de los lados\n");
    printf("Lado 1 ");
    scanf("%d",&Lado1);
    printf("Lado 2 ");
    scanf("%d",&Lado2);
    printf("Lado 3 ");
    scanf("%d",&Lado3);

    // Determina si el triángulo es equilátero
    if (Lado1 == Lado2 && Lado2 == Lado3){
        printf("Su triangulo de lados %d,%d,%d es equilatero.",Lado1,Lado2,Lado3);
    }
    else{
        if (Lado1 == Lado2 && Lado2 != Lado3){
            printf("Su triangulo de lados %d,%d,%d es isosceles .",Lado1,Lado2,Lado3);
        }
        else{
            if (Lado1 != Lado2 && Lado2 != Lado3){
            printf("Su triangulo de lados %d,%d,%d es escaleno .",Lado1,Lado2,Lado3);
        }
            else{
                if (Lado1 >= Lado2+Lado3 | Lado2 >= Lado1+Lado3 | Lado3 >= Lado2+Lado1){
                printf("Su triangulo de lados %d,%d,%d las longitudes no forman un triangulo valido.",Lado1,Lado2,Lado3);
            }
        }

     }
    return 0;
    }
}
 
