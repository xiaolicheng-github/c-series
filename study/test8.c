#include <stdio.h>
int main() {
  int i, j, res;
  for (i = 1; i < 10; i++) {
    for(j = 1; j <= i; j++) {
      res = i * j;
      printf("%d * %d = %-4d", j ,i, res); /*-3d��ʾ����룬ռ3λ*/
    }
    printf("\n");
  }
}