#include <stdio.h>

int main(){
    int Num,residuo,invertido,cont=0;
    printf("Ingrese el numero que quiere voltear: ");
    scanf("%d",&num);
    if(num > 0){
        for (int i = 0; num > 0; i++)
        {
            residuo = num % 10;
            num = num / 10;
            invertido = invertido * 10;
            invertido = invertido + residuo;
        }
        printf("El numero invertido es %d", invertido);

    }
    else
    printf("El numero ingresado es invalido");
}