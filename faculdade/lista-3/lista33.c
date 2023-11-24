#include <stdio.h>

int main(void){

    for (size_t i = 1; i <= 100; i++)
    {
        if(i % 5 == 0){
            printf("%u\n", i);
        }
    }
    
    return 0;
}