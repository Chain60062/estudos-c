#include <stdio.h>
#include <stdbool.h>//bool, true, false

int main(void)
{
    float trade_value = 0, commission_rate = 0;
    _Bool flag = 1;//true: 1; any positive integer will become 1; false: 0;
    bool flag2 = false;
    printf("Enter the value of trade: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500)
        commission_rate = 30 + .017f * trade_value;
    else if (trade_value < 6250.00f)
        commission_rate = 56 + .0066f * trade_value;
    else if (trade_value < 20000.00f)
        commission_rate = 76 + .0034f * trade_value;
    else if (trade_value < 50000.00f)
        commission_rate = 100 + .0022f * trade_value;
    else if (trade_value < 500000.00f)
        commission_rate = 100 + .0011f * trade_value;
    else
        commission_rate = 100 + .0009f * trade_value;

    if (commission_rate < 39.00f)
        commission_rate = 39.00f;

    printf("Comission $%.2f\n", commission_rate);
    return 0;
}