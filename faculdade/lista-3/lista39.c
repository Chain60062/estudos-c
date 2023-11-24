#include <stdio.h>

int main(void){
    const float RAZAO_FAHRENHEIT = 1.8f;

    for (int celsius = 0; celsius <= 100; celsius += 5)
    {
        printf("C: %-8d F: %-8.0f\n", celsius, celsius * RAZAO_FAHRENHEIT + 32.0f);
    }
    
    return 0;
}