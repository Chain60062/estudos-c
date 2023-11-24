#include <stdio.h>

int main(void) {

    int num = 0;
    printf("Digite o valor do número: ");
    scanf("%d", &num);

    printf("|%d| = %d\n", num, num < 0 ? -num : num);
    return 0;
}