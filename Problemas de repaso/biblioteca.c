#include <stdio.h>
/*Suma de números primos:Elabore un programa que le pida al usuario, a través del teclado, 
un número positivo N menor que 100 y positivo. El sistema debe generar los números primos de 1 hasta N. 
Además, deben desplegar la cantidad de numero primos que existe en ese rango. (4ptos)*/
int primos(){
    int N;
    int cont = 0,mod;
    int i = 1;
    int j = 1;
    do
    {
        printf("Ingrese un numero que sea menor a 100 y positivo: ");
        scanf("%d",&N);
    } while (N>100 || N < 0);

    for (i ; i <= N ; i++){
        for (j ; j <= i ; j++){
        mod = i % j;
        if(mod == 0){
            cont ++;
        }
        //printf("%d mod %d = %d conta %d ",i,j,mod,cont);
        }
        if (cont <= 2){
                printf("%d ",i);

            }
        cont = 0;
        j = 1;
    }
}

