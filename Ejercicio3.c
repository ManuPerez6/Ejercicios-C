//integrantes: Gonzalez Thomas, Pérez Manuel
#include <stdio.h>

int main() 
{
    int num, mayor, menor;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    mayor = menor = num; 
    for (int i = 1; i < 5; i++) 
    {
        printf("Introduce otro numero: ");
        scanf("%d", &num);
        if (num > mayor)
        {
            mayor = num;  
        }
        if (num < menor)
        {
            menor = num;  
        }
    }
    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
    return 0;
}
