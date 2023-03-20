#include <stdio.h>

int main() {
  int aux;
  int fatorial;
  printf("Digite o número a ser fatorado: ");
  scanf("%d", & aux);
  for(fatorial = 1; aux>=1; --aux){
    fatorial *= aux;

  }
  printf("\nO resultado é: %d", fatorial);

  return 0;
}
