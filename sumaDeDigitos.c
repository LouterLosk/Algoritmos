#include <stdio.h>


int main()
{
    int numero,Dig,suma,Seguir;
    suma = 0;
    Seguir = 1;
    do{
        printf("Ingrese el numero: ");
        scanf("%d",&numero);
        suma = 0;
           do{
                //calculasr el digito
                Dig = numero % 10;
                numero /= 10 ;
                suma += Dig;
            } 
            while (numero>0);
            
        printf("La suma de los digitos es %d\n\n",suma);
        printf("¿Desea agregar otro numero?\n");
        printf("Si(1)    No(0)\n");
        scanf("%d",&Seguir);
    } 
    while (Seguir != 0);
    


 
   
    
}
