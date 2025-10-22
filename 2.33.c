#include <stdio.h>

int main() {
    double distance;       
    double fuel_price;     
    double km_per_liter;   
    double parking_fee;    
    double toll_fee;       
    double total_cost;     
    double fuel_cost;      

    printf("總里程數 (公里): ");
    scanf("%lf", &distance);

    printf("汽油一公升的價格 (元): ");
    scanf("%lf", &fuel_price);

    printf("平均每公升可行駛的公里數: ");
    scanf("%lf", &km_per_liter);

    printf("一天的停車費 (元): ");
    scanf("%lf", &parking_fee);

    printf("一天的通行費 (元): ");
    scanf("%lf", &toll_fee);

    fuel_cost = (distance / km_per_liter) * fuel_price;
    total_cost = fuel_cost + parking_fee + toll_fee;

    printf("一天開車的總花費為: %.2f 元\n", total_cost);

    return 0;
}
