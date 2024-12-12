#include <stdio.h>
//Calculo de raices 

//Variables
int a,b,c;
float raices;
void main(){
    printf("ax^2+bx+c = 0\n");
    printf("Ingrese a :");
    scanf("%d", &a);
    printf("Ingrese b :");
    scanf("%d", &b);
    printf("Ingrese c :");
    scanf("%d", &c);
    printf("%dx^2+%dx+%d = 0\n",a,b,c);
    if (a == 0 && b == 0){
        printf("La ecuacion %dx^2+%dx+%d = 0 es degenerada",a,b,c);
    }
    else if (a == 0 && b != 0){
        printf("Existe una raiz unica %f",(float)c/(float)b);
      
        }
        else {
            raices = -b +
        }
        
    
    
}
