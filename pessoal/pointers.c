#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, menor = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite a terceiro número: ");
    scanf("%d", &c);

    if (a < b){
        if(a < c){
            menor = a
        }
    }
    else if (b < c && b < ) menor = b;
    else menor = c;

    printf("O menor foi: %d.\n", menor);
    // int num1 = 2, num2 = 3, sum = 0, mul = 0, div = 1;
    // int *ptr1, *ptr2;
    // ptr1 = &num1;
    // ptr2 = &num2;
    // sum = *ptr1 + *ptr2;//2 + 3 = 5
    // mul = sum * (*ptr1);//mul = 5 * 2
    // *ptr2 += 1;//num2 += 1 = 4
    // div = 9 + (*ptr1) / (*ptr2) - 30;//div = 9 + 2 / 3 - 30 = -21

    // printf("%d\n", num1);
    // printf("%d\n", num2);
    // printf("%d\n", *ptr1);
    // printf("%d\n", *ptr2);
    // printf("%d\n", sum);
    // printf("%d\n", mul);
    // printf("%d\n", div);
    // int var = 10;
    // int *p = &var;
    // double **q = &p;
    // printf("%f\n", **q);
    // int *p;
    // *p = 1;
    // printf("%d\n", *p);

    // int i = 10, *p = &i;
    // int *q;

    // q = p;//q now points to i address
}