#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int n; 
    int *vetor ; // Ponteiro para o vetor dinâmico
    if (argc < 2) {
        return 0; 
    }
    n = atoi(argv[1]);
    
    if (n == 0) {
        return 0; 
    }
    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        return 1; 
    }
    for (int i = 0; i < n; i++) {
        vetor[i] = atoi(argv[i + 2]); 
    }
    free(vetor);
    return 0;
}
