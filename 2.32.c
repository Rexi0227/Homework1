#include <stdio.h>

int main() {
    float height, weight, bmi;

    printf("請輸入身高: ");
    scanf("%f", &height);
    printf("請輸入體重: ");
    scanf("%f", &weight);
    

    bmi = weight / (height * height);

    // 顯示結果
    printf("您的 BMI 為: %.2f\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: \tless than 18.5\n");
    printf("Normal: \tbetween 18.5 and 24.9\n");
    printf("Overweight: \tbetween 25 and 29.9\n");
    printf("Obease: \t30 or greater");

    return 0;
}
