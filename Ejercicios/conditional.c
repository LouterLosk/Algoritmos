#include <stdio.h>


main(){
    int x, resultado;
    printf("Ingrese un numero: ");
    scanf("%d",&x);
    if (x > 0){
        if (x % 2 == 0){
            printf("El numero %d es par",x);
        }
        else{
            printf("El numero %d es impar",x);
        }
    }
}

