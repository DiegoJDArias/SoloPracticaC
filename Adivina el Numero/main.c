#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/* /////////////////////////////////////////////////
   Author Diego J D Arias - diegojdarias@gmail.com.
*/////////////////////////////////////////////////

void adivinar(int valor)
{
    srand(time(NULL));
    int eleccion = rand()%valor + 1;
    int prediccion;
    printf("Adivina el nuemero elegido por la computadora del 1 al %d\n", valor);
    scanf("%d", &prediccion);
    int contador = 0;

    while (prediccion != eleccion)
    {
        if (prediccion > eleccion)
        {
            printf("Este numero es mayor, vuelve a intentarlo\n");
            scanf("%d", &prediccion);
            contador++;
        }
        else if (prediccion < eleccion)
        {
            printf("Este numero es menor, vuelve a intentarlo\n");
            scanf("%d", &prediccion);
            contador++;
        }
    }
    printf("*************************************************\n");
    printf("Felicitaciones, has adivinado el numero:\n");
    printf("El numero elegido por la computadora era el: %d\n", eleccion);
    printf("Numeros fallidos de intentos: %d\n", contador);
    printf("*************************************************\n");
}


int main(void)
{
    int valor;
    printf("Elegi el rango a adivinar desde el 1 al...? \n");
    scanf("%d", &valor);
    adivinar(valor);

    getch();

    return EXIT_SUCCESS;
}
