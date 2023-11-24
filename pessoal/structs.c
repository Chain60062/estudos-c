#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    int age;
    char *name;
} Person;

Person **persons;
int persons_size = 0;

void add_person()
{
    char name[256];
    int age;
    Person *person = malloc(sizeof(Person));

    printf("Digite o nome: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s!\n", name);
    name[strcspn(name, "\n")] = 0;
    while (true)
    {
        printf("Digite a idade: ");
        getchar();
        scanf("%d", &age);
        if (age > 150 || age < 1)
        {
            printf("Idade inválida\n");
            continue;
        }
        break;
    }
    person->name = name;
    person->age = age;

    persons[persons_size] = person;
}
void list_persons(){
    for (int i = 0; i < persons_size; i++)
    {
        printf("Nome: %s", persons[0]->name);
        printf("Idade: %d", persons[0]->age);
    }
    
}
int main(void)
{
    // Person *person = malloc(sizeof(Person));
    // person->name = "Vinicius";
    // person->age = 14;
    // printf("Name: %s\n", persons[0]->name);

    // free(person);
    add_person();

    return 0;
}