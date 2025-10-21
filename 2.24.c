#include <stdio.h>

int main() {
    int num;

    printf("輸入整數：");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d 是偶數\n", num);
    else
        printf("%d 是奇數\n", num);

    return 0;
}
