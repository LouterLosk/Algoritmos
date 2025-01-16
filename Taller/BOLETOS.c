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
    const int Kilometro = 6;
    printf("Quiere calcular el precio a pagar? 1 = Si 0 = No\n");
    scanf("%d",&seguir);

    while(seguir == 1)
    {
        int distancia;
        int costo = 0 ;
        int ingreso = 0;
        int vuelto [4] = {0, 0 , 0 , 0};//total, monedas de 1, monedas de 2, monedas de 5
        int monedas = 0;
        do
        {
            printf("El costo por kilometro es de %d pesos\n",Kilometro); 
            printf("Ingrese la distancia del viaje(en kilometros): \n");
            scanf("%d",&distancia);
        } while (distancia <= 0);
        //Calculo del costo del voleto
        costo = distancia * Kilometro;
        printf("El valor del viaje es de %d pesos.\n",costo);
        printf("-------------------------------------------------\n");
        do
        {
            printf("Con cuanto va a pagar?\n");
            scanf("%d",&ingreso);
        } while (ingreso < 0);
        printf("-------------------------------------------------\n");
        vuelto[0] = ingreso - costo;
        printf("Su vuelto es de %d pesos\n",vuelto[0]);
        
        //Calculo de vuelto 1 2 5 pesos 
        vuelto[3] = vuelto[0] / 5;//Calculo de vuelto 5 pesos
        monedas = vuelto[0] % 5;
        vuelto[2] = monedas/2; //Calculo de vuelto 2 pesos
        monedas = monedas%2;//Calculo de vuelto 1 pesos
    
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
        printf("-------------------------------------------------\n");
        printf("Quiere calcular otro valor? 1 = Si 0 = No\n");
        scanf("%d",&seguir);
        }

 return 0;    
}
