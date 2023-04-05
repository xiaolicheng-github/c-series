#include <stdio.h>
int main() {
    int num1, num2, sum1;
    printf("输入两个数 \n");
    printf("第一个 \n");
    scanf("%d", &num1);
    printf("第二个 \n");
    scanf("%d", &num2);
    sum1 = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum1);
    return 0;
}