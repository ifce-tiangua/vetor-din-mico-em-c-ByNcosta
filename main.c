#include <stdio.h>
#include <stdlib.h>
int main() {
    int *vetores;
    int tam, i;
    printf( " ");
    scanf("%d", &tam);
   vetores = (int *)malloc(tam * sizeof(int));
    if (vetores == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }
         printf( "");
    for (i = 0; i < tam; i++) {
        printf(" %d:", i + 1);
        scanf("%d", &vetores[i]);
    }
    printf( "\n");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetores[i]);
    }
    printf("\n");
    free(vetores);
    return 0;
 }
    for (int i = 0; i < n; i++) {
        vetor[i] = atoi(argv[i + 2]); 
    }
    free(vetor);
    return 0;
 }
