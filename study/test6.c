#include <stdio.h>
int main() {
    double d1, d2, d3;
    printf("���������������� \n");
    printf("��һ�� \n");
    scanf("%lf", &d1);
    printf("�ڶ��� \n");
    scanf("%lf", &d2);
    d3 = d1 * d2;
    printf("%lf * %lf = %lf", d1, d2, d3);
    return 0;
}