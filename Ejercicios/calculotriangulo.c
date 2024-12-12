#include <stdio.h>
#include <math.h>

/*Construya un algoritmo que reciba como datos de entrada tres números enteros, 
y regrese como dato de salida un mensaje que diga si esos tres números enteros pueden ser las medidas de los lados de un triangulo rectángulo.*/
int main()
{
    float h,h2; 
    float  l1,l2,l3;
    printf("Ingrese el lado 1");
    scanf("%f",&l1);
    printf("Ingrese el lado 2");
    scanf("%f",&l2);
    printf("Ingrese el lado 3");
    scanf("%f",&l3);
    if (l1 > l2 && l1 > l3)
    {
        h = l1;
        h2 = pow(l3,2) + pow(l3,2);
        if (h2 == h)
        {
            printf("Si es un triangulo rectangulo");
        }
    }
    else
    {
        if (l2 > l3)
        {
            h = l2;
        }
        else
        {
            h = l3;
        }
    }
    
printf("%d",h);        
}
