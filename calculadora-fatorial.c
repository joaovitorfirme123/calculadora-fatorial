#include <stdio.h>

int main() {
  double aux;
  double fatorial;
  printf("Digite o número a ser fatorado: ");
  scanf("%lf", & aux);
  for(fatorial = 1; aux>=1; --aux){
    fatorial *= aux;

  }
  printf("\nO resultado é: %.0lf", fatorial);

  return 0;
}
