#include <stdio.h>

int main() {
  double aux;
  double fatorial;
  printf("Digite o n�mero a ser fatorado: ");
  scanf("%lf", & aux);
  for(fatorial = 1; aux>=1; --aux){
    fatorial *= aux;

  }
  printf("\nO resultado �: %.0lf", fatorial);

  return 0;
}
