#include <stdio.h>

int main() {
    int vec[] = {0,1,2,3,4};


    int tamanho = sizeof(vec);
    int nOfElements = tamanho / sizeof(vec[0]);

    printf("Tamanho do vetor em bytes: %d\n", tamanho);
    printf("Número de elementos no vetor: %d\n", nOfElements);

    return 0;
}
