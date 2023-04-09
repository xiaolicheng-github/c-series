#include <stdio.h>
int main() {
  int i, j, res;
  for (i = 1; i < 10; i++) {
    for(j = 1; j <= i; j++) {
      res = i * j;
      printf("%d * %d = %-4d", j ,i, res); /*-3d表示左对齐，占3位*/
    }
    printf("\n");
  }
}