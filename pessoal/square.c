#include <stdio.h>

int main(void){
    int i = 1, n = 0, odd = 3, square;
    printf("Number of entries up to: ");
    scanf("%d" , &n);
    
    for(square = 1;i <= n; odd += 2){
        printf("%10d%10d\n", i, square);
        i++;
        square += odd;
    }
    return 0;
}