#include <stdio.h>

int main(void) {
  int number;

  scanf("%d", &number);
  printf("%d %d %d %d %d\n", number / 10000, number % 10000 / 1000, number % 1000 / 100, number % 100 / 10, number % 10);
  return 0;
}
