#include <stdio.h>
#include <stdlib.h>

void RobotCoinCollection(int linhas, int colunas, int **matrizC,
                         int **matrizF) {

  for (long int i = 0; i <= linhas; i++) {
    for (long int j = 0; j <= colunas; j++) {
      matrizF[i][j] = 0;
    }
  }

  for (int i = 1; i <= linhas; i++) {
    for (int j = 1; j <= colunas; j++) {
      matrizF[i][j] =
          (matrizF[i - 1][j] > matrizF[i][j - 1] ? matrizF[i - 1][j]
                                                 : matrizF[i][j - 1]) +
          matrizC[i - 1][j - 1];
    }
  }

  printf("Matriz F:\n");
  for (int i = 1; i <= linhas; i++) {
    for (int j = 1; j <= colunas; j++) {
      printf("%d ", matrizF[i][j]);
    }
    printf("\n");
  }

  // Print Maximum coins collected by robot
  printf("\n%d", matrizF[linhas][colunas]);
}

int main() {
  //  5 6
  //  0 1 0  1 0 0
  //  1 0 0 -1 1 0
  //  0 1 0 -1 1 0
  //  0 0 0  1 0 1
  // -1 -1 -1 0 1 0

  // 5
  long int linhas;
  long int colunas;
  scanf("%ld %ld", &linhas, &colunas);

  int **matrizF = (int **)malloc((linhas + 1) * sizeof(int *) + 2);
  int **matrizC = (int **)malloc((linhas + 1) * sizeof(int *) + 2);

  for (long int i = 0; i <= linhas; i++) {
    matrizF[i] = (int *)malloc(sizeof(int) * (colunas + 2));
    matrizC[i] = (int *)malloc(sizeof(int) * (colunas + 2));
  }
  for (long int i = 0; i < linhas; i++) {
    for (long int j = 0; j < colunas; j++) {
      scanf("%d", &matrizC[i][j]);
    }
  }
  RobotCoinCollection(linhas, colunas, matrizC, matrizF);

  /*
      for (long int i = 0; i < linhas; i++) {
          printf("[%ld] ",i);
          for (long int j = 0; j < colunas; j++) {
              printf("[%ld] %d ",j ,matrizC[i][j]);
          }
          printf("\n");
      }

      for (long int i = 0; i < linhas; i++) {
          for (long int j = 0; j < colunas; j++) {
              printf("%d", matrizF[i][j]);
          }
      }*/

  free(matrizC);
  free(matrizF);
  return 0;
}