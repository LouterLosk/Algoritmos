#include <stdio.h>



void main(){
    int suma,multi,resta;
    int n1, n2, n3;
    float div;
    printf("Ingrese numero 1 ");
    scanf("%d", &n1);
    printf("Ingrese numero 2 ");
    scanf("%d", &n2);
    printf("Ingrese numero 3 ");
    scanf("%d", &n3);
    //suma
    suma = n1+n2+n3;
    printf("El valor de la suma de los tres numeros es de %d\n",suma);
    //multiplicacion
    multi = n1*n2*n3;
    printf("El valor de la multiplicacion de los tres numeros es de %d \n",multi);
    //resta
    resta = n1-n2-n3;
    printf("El valor de la resta de los tres numeros es de %d \n",resta);
    //divicion
    div = ((float)n1/(float)n2)/(float)n3;
    printf("El valor de la divicion de los tres numeros es de %f \n",div);
}