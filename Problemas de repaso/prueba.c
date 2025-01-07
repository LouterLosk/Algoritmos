#include <stdio.h>

int main() {
    int n, contador = 0;

    printf("Introduce un número positivo menor que 100: ");
    scanf("%d", &n);

    if (n > 0 && n < 100) {
        printf("Números primos de 1 a %d: ", n);

        for (int i = 1; i <= n; i++) {
            int es_primo = 1; // Asumimos que el número es primo
            if (i < 2) {
                printf("2");
                es_primo = 0; // 0 y 1 no son primos
                
            } else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        es_primo = 0; // Encontramos un divisor, no es primo
                        break;
                    }
                }
            }
            if (es_primo == 1) {
                printf("%d ", i);
                contador++;
            }
        }
        printf("\nCantidad de números primos en ese rango: %d\n", contador);
    } else {
        printf("El número debe ser positivo y menor que 100.\n");
    }

    return 0;
}