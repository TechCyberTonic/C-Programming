#include <stdio.h>

int main() {
  int cube[3][4][5] = {
    {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 15},
      {16, 17, 18, 19, 20}
    },
    {
      {21, 22, 23, 24, 25},
      {26, 27, 28, 29, 30},
      {31, 32, 33, 34, 35},
      {36, 37, 38, 39, 40}
    },
    {
      {41, 42, 43, 44, 45},
      {46, 47, 48, 49, 50},
      {51, 52, 53, 54, 55},
      {56, 57, 58, 59, 60}
    }
  };

  printf("Cube:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 5; k++) {
        printf("%d ", cube[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  int value = cube[1][2][3];
  printf("Value at position (1, 2, 3): %d\n", value);

  return 0;
}