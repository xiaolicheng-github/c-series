#include <stdio.h>
int main() {
  int num, i;
  printf("���������������طֽ���������");
  scanf("%d", &num);
  printf("%d=", num);
  for(int i = 2; i <= num; i++) {
    while(num % i == 0) {
      printf("%d", i);
      num = num / i;
      if(num != 1) {
        printf("*");
      }
    }
  }
  return 0;
}