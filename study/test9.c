#include <stdio.h>
int main() {
  int num, i;
  printf("请输入整数（返回分解质因数）");
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