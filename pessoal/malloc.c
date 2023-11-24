#include <stdio.h>
#include <stdlib.h>

int multiply(void) {
    char ch = 0;
    int size = 0, capacity = 1;
    int* c = malloc(sizeof(int) * capacity);

    while (1) {
        scanf("%d%c", &c[size], &ch);
        if (ch == '\n')
            break;
        size++;
        if (size == capacity) {
            capacity *= 2;
            c = realloc(c, sizeof(int) * capacity);
        }
    }
    int multiplied = 1;
    for (size_t i = 0; i <= size; i++)
        multiplied *= c[i];

    free(c);
    c = NULL;
    return multiplied;
}

int main(void) {
    int result = multiply();

    printf("%d\n", result);
    
    return 0;
}