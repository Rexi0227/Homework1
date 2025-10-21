#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;

    printf("請輸入三個整數：");
    scanf("%d %d %d", &a, &b, &c);

    max = min = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (b < min) min = b;
    if (c < min) min = c;

    printf("最大值是：%d\n", max);
    printf("最小值是：%d\n", min);

    return 0;
}
