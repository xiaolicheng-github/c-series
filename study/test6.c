#include <stdio.h>
int main() {
    double d1, d2, d3;
    printf("请输入俩个浮点数 \n");
    printf("第一个 \n");
    scanf("%lf", &d1);
    printf("第二个 \n");
    scanf("%lf", &d2);
    d3 = d1 * d2;
    printf("%lf * %lf = %lf", d1, d2, d3);
    return 0;
}