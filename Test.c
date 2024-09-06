#include <stdio.h>

int main() {
  int x, y;
  printf("Ingrese un número:\n ");
  scanf("%d", &x);
  printf("Ingrese el segúndo número:\n ");
  scanf("%d", &y);
  if (x > y) {
    printf("El mayor número es %d", x);
  } else if (x == y) {
    printf("Los numeros son iguales");
  } else {
    printf("El número mayor es %d", y);
  }
  return (0);
}
