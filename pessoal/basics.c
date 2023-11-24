#include <stdio.h>

int main(void)
{
    // int a, b, c, d, e, f;
    // (a = (b += (((c++) - d) + ((--e) / (-f)))));
    int x = 5, y = 0, z, i = 0;
    char minha_string[45] = {0};//initialize all elements to zero
    z = (y = x + 3) + (x = 2);
    printf("z is equal to: %i.\n", z); // Depending on the compiler z will be either 10 or 5
    if ((i = 1) == 1)
        printf("Printado\n");

    
    
    return 0;
}