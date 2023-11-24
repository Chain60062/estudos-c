#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100
// variaveis globais
int contents[STACK_SIZE];
int top = 0;
void empty_stack(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(int value)
{
    if (!is_full)
        contents[top++] = value;
    else
        stack_overflow();
}
int pop(void)
{
    if (!is_empty())
        return contents[--top];
    else
        stack_underflow();
}
int main(void)
{
    return 0;
}