#include <stdio.h>

int main(){
    int n, i = 0, metodo;
    printf("Ingresa hasta donde se incrementará i:\n ");
    scanf("%d", &n);
    printf("¿Que método eliges para realizar el incremento? (1:for) | (2:while) | (3:do-while):\n");
    scanf("%d", &metodo);
    switch (metodo)
    {
    case 1:
        for(int j = 0; j < n; j++){
        i++;
        }
        printf("i es igual a %d", i);
        break;
    case 2:
        int k = 0;
        while(k < n){
            i++;
            k++;
        }
        printf("i es igual a %d", i);
        break;
    case 3:
        int l = 0;
        do
        {
            i++;
            l++;
        } while (l < n);
        printf("i es igual a %d", i);
        break;
    default:
        printf("Entrada desconocida, por favor elige un número del 1 al 3");
        break;
    }
    
    return 0;
}