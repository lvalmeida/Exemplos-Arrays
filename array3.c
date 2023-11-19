#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
  if (argc <= 1) {

    return -1;
  }

  int nOfElements = atoi(argv[1]);
  int vec[nOfElements];

  printf("Número de elementos: %d \n", nOfElements);

  for (int i = 0; i < nOfElements; i++)
    vec[i] = i + 1;


  printf("%s %13s\n", "Elementos", "Valor");

  for (int i = 0; i < nOfElements; i++)
  printf("%7d %13d\n", i, vec[i]);

  return 0;
}
