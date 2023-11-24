#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define STRING_LENGTH 256
#define CPF_LEN 11
#define TEL_LEN 14

void validar_nomes()
{
    int names_total = 0;
    char name[STRING_LENGTH + 1];
    char *names[100];
    bool valid = true;
    const char spc_delim[2] = " "; // space

    printf("Digite o seu nome: ");
    fgets(name, STRING_LENGTH, stdin);

    char *token = strtok(name, spc_delim);

    for (int i = 0; token != NULL; i++, names_total++)
    {
        names[i] = token;
        token = strtok(NULL, spc_delim);
    }
    // se um nao possuir maiscula no char 0, valid = false
    for (int i = 0; i < names_total; i++)
    {
        if (!(names[i][0] >= 'A' && names[i][0] <= 'Z'))
        {
            valid = false;
            break;
        };
    }
    // combinar validacao
    if (valid && names_total >= 2)
    {
        printf("Nome completo válido\n");
    }
    else
    {
        printf("Inválido\n");
    }
}
void cpf()
{
    char cpf[CPF_LEN + 1] = {0};
    char cpf_formatted[CPF_LEN + 3 + 1] = {0};
    printf("Digite seu cpf(Apenas Números): ");
    fgets(cpf, CPF_LEN + 1, stdin);
    fgetc(stdin);

    cpf[strcspn(cpf, "\n")] = '\0';
    printf("cpflen: %d\n", strlen(cpf));
    if (strlen(cpf) != 11)
    {
        printf("CPF Inválido.\n");
        return;
    }
    for (size_t i = 0, cpy_i = 0; i < strlen(cpf); i++, cpy_i++) // index e copy index
    {
        if (cpf[i] == ' ')
        {
            printf("CPF não pode conter espaços\n");
            break;
        }
        cpf_formatted[cpy_i] = cpf[i];
        switch (i)
        {
        case 2:
            cpf_formatted[++cpy_i] = '.';
            break;
        case 5:
            cpf_formatted[++cpy_i] = '.';
            break;
        case 8:
            cpf_formatted[++cpy_i] = '-';
            break;
        default:
            break;
        }
    }
    puts(cpf_formatted);
}
void validar_telefone()
{
    char telefone[TEL_LEN + 1] = {0};
    char telefone_num_only[TEL_LEN - 2 + 1] = {0};
    bool is_valid = true;
    printf("Digite um número: ");
    fgets(telefone, TEL_LEN + 1, stdin);
    telefone[strcspn(telefone, "\n")] = '\0'; // remove new line added by fgets

    if (strlen(telefone) != 14 || telefone[0] != '+')
    {
        is_valid = false;
    }
    else
    {
        for (size_t i = 1, j = 0; i <= strlen(telefone); i++)
        {
            if (telefone[i] == '\0')
            {
                break;
            }
            if (i == 3)
            {
                if (telefone[i] != ' ')
                {
                    is_valid = false;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (i == 9)
            {
                if (telefone[i] != '-')
                {
                    is_valid = false;
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (!((telefone[i] - '0') >= 0 && (telefone[i] - '0') <= 9)) // - 0 converte char para int
            {
                is_valid = false;
                break;
            }
            else
            {
                telefone_num_only[j] = telefone[i];
                j++;
            }
        }
    }
    if (is_valid)
        printf("%s\n", telefone_num_only);

    printf("ISValid: %d\n", is_valid);
}
void transposta(){
    int matrix[3][3];
}
int main()
{
    validar_nomes();
    cpf();
    validar_telefone();
}