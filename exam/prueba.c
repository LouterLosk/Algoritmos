#include<stdio.h>

int main()
{
    int num,NUM;
    int dig1,dig2;
    char seguir;
    do
    {
        dig1 = 0;
        dig2 = 0;
        do
        { 
            printf("Ingrese un numero de tres digitos positivo: ");
            scanf("%d",&num);
        } while (num <= 100 || num >= 999 );
        
      
            
            NUM = num;
            //calculo de cada digito
            dig1 = num % 10;
            printf("%d",dig1);
            num = num/10;
            dig2 = num % 10;
            printf("%d",dig2);
            num = num/10;
            //comparacion de los digitos
            if (dig1 + dig2 == num )
            {
                printf("El la suma de %d + %d = %d Existe una relacion",dig1,dig2,dig1 + dig2);
            }
            else
                {
                    if (dig1 + num == dig2)
                    {
                        printf("El la suma de %d + %d = %d Existe una relacion",dig1,num,dig1 + num);
                    }
                    else
                        {
                            if (dig2 + num == dig1)
                            {
                            printf("El la suma de %d + %d = %d Existe una relacion",dig2,num,dig2 + num);
                            }
                            else
                                {
                                    printf("El numero %d no tiene relación",NUM);
                                }
                        }
                    
                }

            printf("\n¿Desea continuar?(S/N) ");
            scanf(" %c",&seguir);
            switch (seguir)
                    {
                    case 'S':
                        seguir = 1;
                        break;
                    case 's':
                        seguir = 1;
                        break;
                    case 'N':
                        seguir = 0;
                        break;
                    case 'n':
                        seguir = 0;
                        break;
                    default:
                        break;
                    }
    } while (seguir == 1);
    return 0;
}



sca