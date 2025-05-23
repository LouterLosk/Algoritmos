#include <stdio.h>
/*
1.	Solicita al usuario la distancia del viaje (en kilómetros) y calcula el costo del boleto con base en una tarifa por kilómetro. 
2.	Pide el monto que paga el usuario y calcula el cambio. 
3.	Devuelve el cambio en monedas de 5, 2 y 1 peso. 
4.	Muestra un resumen con el costo del boleto, el monto pagado y el cambio entregado. 
*/
int main()
{
    int seguir;
    const int Kilometro = 3;
    
    do//validacion de entrada de datos
    {
       printf("Quiere calcular el precio a pagar? 1 = Si 0 = No\n");
       scanf("%d",&seguir);
    } while (seguir < 0 || seguir >1);
    
    while(seguir == 1)
    {
        float distancia;//definir variables
        int costo = 0 ;//definir variables
        int ingreso = 0;//definir variables
        int vuelto [4] = {0, 0 , 0 , 0};//total, monedas de 1, monedas de 2, monedas de 5
        int monedas = 0;//definir variables
        do//valida que la entrada sea positiva 
        {
            printf("El costo por kilometro es de %d pesos\n",Kilometro); 
            printf("Ingrese la distancia del viaje(en kilometros): \n");
            scanf("%f",&distancia);
        } while (distancia <= 0);
        //Calculo del costo del voleto
        costo = distancia * Kilometro;
        printf("El valor del viaje es de %d pesos.\n",costo);
        printf("-------------------------------------------------\n");
        do //validar que los valores ingresados sea positivio y mayor que el costo
        {
            printf("Con cuanto va a pagar?\n");
            scanf("%d",&ingreso);
            if (ingreso < 0){
                printf("EL costo no pude ser negativo\n");
                printf("El costo es de %d pesos\n",costo);
            }
            if (ingreso > 0&& ingreso < costo){//informa que lo ingresado es menor al costo
                printf("El valor ingresado es menor al valor del viaje,faltan %d pesos\n",costo - ingreso);
            }
        } while (ingreso < 0 || ingreso < costo);
        printf("-------------------------------------------------\n");
        vuelto[0] = ingreso - costo;//calculo del vueto 
        printf("Su vuelto es de %d pesos\n",vuelto[0]);
        //Calculo de vuelto 1 2 5 pesos 
        vuelto[3] = vuelto[0] / 5;//Calculo de vuelto 5 pesos
        monedas = vuelto[0] % 5;
        vuelto[2] = monedas/2; //Calculo de vuelto 2 pesos
        vuelto[1] = monedas%2;//Calculo de vuelto 1 pesos
        //Muestra un resumen con el costo del boleto, el monto pagado y el cambio entregado. 
        if (vuelto[3] > 0){
            printf("Con %.0f monedas de 5 pesos \n",(float)vuelto[3]);
        }
        if (vuelto[2]>0){
            printf("Con %.0f monedas de 2 pesos \n",(float)vuelto[2]);
        }
        if (vuelto[1] > 0){
            printf("Con %.0f monedas de 1 pesos \n",(float)vuelto[1]);
        }
        printf("-------------------------------------------------\n");//se pregunta si quire ingresar otro dato
        printf("Quiere calcular otro valor? 1 = Si 0 = No\n");
        scanf("%d",&seguir);
        }
 return 0;    
}
