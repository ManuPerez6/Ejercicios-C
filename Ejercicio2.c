#include <stdio.h>

int main() {
    int contador = 0; 

  
    for (int i = 20; i <= 100; i++) {
  
        if (i % 2 == 0) {
            printf("%d  ", i); 

            contador++;

            if (contador == 6) {
                printf("\n"); 
                contador = 0; 
            }
        }
    }

    return 0;
}