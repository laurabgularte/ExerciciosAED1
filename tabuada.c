#include <stdio.h>
#include <math.h>

int main()
{


    int numero;
    int multiplicador;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf ("A tabuada do número %d eh:\n",numero);

    for (multiplicador = 1; multiplicador <=10; multiplicador++) {

        int resultado = numero * multiplicador;
    printf ("%d x %d = %d\n",numero, multiplicador, resultado);

    }

  


    return 0;
}
