#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

  int nOfElements = atoi(argv[1]);

  printf("Numero de elementos: %d\n", nOfElements);

  int vec[nOfElements];
  int soma = 0;

  printf("%s %13s\n","Elementos", "Valor");

  for (int i = 0; i < nOfElements; i++) {
    vec[i] = i + 1;

  printf("%7d %13d\n", i, vec[i]);

    soma += vec[i];
  }

  printf("Soma:%d\n", soma);


  return 0;
}
