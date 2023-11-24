/*
	atividade 1 de algoritmos (1.0)

	imagine que a disciplina de algoritmos possui estudantes do curso de BSI e do curso de ADS
	o professor precisa lancar as notas de todos os estudantes, mas gerar estatisticas separadas para cada curso
	se o estudante tirar mais que 7.0 ele eh aprovado, se tirar menos que 3.0 ele eh reprovado, caso contrario fica de final
	implemente um programa em que o usuario possa inserir uma quantidade qualquer de notas
	o programa deve comecar exibindo uma mensagem de boas-vindas e explicando o que o usuario deve fazer
	ao inserir cada nota o usuario devera informar tambem o curso do estudante
	nao eh permitido inserir primeiro os de um curso e depois do outro, as notas devem poder ser inseridas em qualquer ordem
	apos todas as notas terem sido inseridas, o programa deve informar:
		- qual a media geral de cada curso
		- quantos estudantes de cada curso foram reprovados
		- quantos estudantes de cada curso ficaram de final
		- quantos estudantes de cada curso foram aprovados
		- qual o percentual total de alunos aprovados
		- qual curso teve mais notas acima de 9.0
		- quantos estudantes tiraram zero
	por fim o programa deve perguntar se o usuario quer repetir o processo, caso sim voltar ao inicio, caso nao deve se despedir e encerrar
	DUPLA: VINICIUS MIRANDA MENEZES
		   FERNANDA VOGT

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_COURSES 10
#define COURSE_SIZE 32

void print_results(void);
void print_menu(void);
void clear_results(void);
void read_courses(void);
void remove_course(void);

int curso = 0, soma_notas_bsi = 0, soma_notas_ads = 0, total_alunos_bsi = 0, total_alunos_ads = 0;
int total_reprovados_ads = 0, total_reprovados_bsi = 0;
int total_aprovados_ads = 0, total_aprovados_bsi = 0;
int total_final_ads = 0, total_final_bsi = 0;
int acima_nove_ads = 0, acima_nove_bsi = 0;
int total_zeros = 0;
int num_courses = 0;
char courses[MAX_COURSES][COURSE_SIZE] = {0}; // 32 cursos com 32 caracteres cada
int main()
{
	bool sair = false, parar_leitura = false;
	char continuar;
	float nota = 0.0f;
	int menu_code = 0;
	while (!sair)
	{
		printf("BEM VINDO AO PROGRAMA DE NOTAS\n");
		printf("Digite a ação que deseja tomar: \n");
		print_menu();

		while (scanf("%d", &menu_code) != 1)
		{
			printf("Entrada invalida\n");
			continue;
		}

		switch (menu_code)
		{
		case 1:
			insert_course();
			break;
		case 2:
			break;
		case 3:
			break;

			while (!parar_leitura)
			{

				printf("Digite o numero do curso\n");
				printf("------------------------------");
				for (int i = 0; i < sizeof courses / sizeof courses[0]; i++)
				{
					printf("%d para %s\n", (i + 1), courses[i]);
				}
				printf("------------------------------");
				scanf("%i", &curso);

				if (curso >= 0 && curso < num_courses)
				{
					printf("Curso invalido insira os dados novamente.\n");
					continue;
				}

				printf("Digite a nota do aluno: ");
				scanf("%f", &nota);

				if (nota > 10)
				{
					printf("Nota inválida, deve ser entre 0 e 10.\n");
					continue;
				}

				if (curso == 1)
				{
					soma_notas_ads += nota;
					total_alunos_ads++;
					if (nota == 0)
						total_zeros++;
					else if (nota < 3)
						total_reprovados_ads++;
					else if (nota < 7)
						total_final_ads++;
					else if (nota <= 9)
						total_aprovados_ads++;
					else
					{
						printf("Acima de nova acionado");
						acima_nove_ads++;
						total_aprovados_ads++;
					}
				}
				else
				{
					total_alunos_bsi++;
					soma_notas_bsi += nota;
					if (nota == 0)
						total_zeros++;
					else if (nota < 3)
						total_reprovados_bsi++;
					else if (nota < 7)
						total_final_bsi++;
					else if (nota <= 9)
						total_aprovados_bsi++;
					else
					{
						printf("Acima de nova acionado");
						acima_nove_bsi++;
						total_aprovados_bsi++;
					}
				}

				printf("Deseja inserir outra nota? (s/n): ");
				scanf(" %c", &continuar);

				if (continuar == 's')
				{
					continue;
				}
				else
				{
					parar_leitura = 1;
				}
			}
			// imprimir resultados
			print_results();

			printf("Deseja continuar no programa? (s/n): ");
			scanf(" %c", &continuar);
			if (continuar == 's')
			{
				parar_leitura = 0;
				sair = 0;
				clear_results();
				continue;
			}
			else
				sair = 1;
		}
	}
	return 0;
}

void print_results(void)
{
	printf("----------------------------RESULTADOS--------------------------------\n");
	// Medias
	printf("Media total ADS %.2f\n", soma_notas_ads == 0 ? 0 : (float)soma_notas_ads / (float)total_alunos_ads);
	printf("Media total BSI %.2f\n", soma_notas_bsi == 0 ? 0 : (float)soma_notas_bsi / (float)total_alunos_bsi);
	// reprovados
	printf("Total de alunos reprovados ADS %i\n", total_reprovados_ads);
	printf("Total de alunos reprovados BSI %i\n\n", total_reprovados_bsi);
	// ficaram de prova final
	printf("Total de alunos prova final ADS %i\n", total_final_ads);
	printf("Total de alunos prova final BSI %i\n\n", total_final_bsi);
	// aprovados
	printf("Total de alunos aprovados ADS %i\n", total_aprovados_ads);
	printf("Total de alunos aprovados BSI %i\n\n", total_aprovados_bsi);
	// percentual total aprovados
	printf("Percentual de alunos aprovados no geral %.2f%%\n\n", (((float)total_aprovados_ads + (float)total_aprovados_bsi) / ((float)total_alunos_ads + (float)total_alunos_bsi)) * 100);
	// qual curso teve mais 9
	if (acima_nove_ads > acima_nove_bsi)
	{
		printf("O curso de ADS possui mais alunos com notas acima de nove.\n\n");
	}
	else if (acima_nove_ads < acima_nove_bsi)
	{
		printf("O curso de BSI possui mais alunos com notas acima de nove.\n\n");
	}
	else
	{
		printf("As duas turmas tiveram o mesmo numero de notas acima de nove\n\n");
	}
	// total de zeros
	printf("O total de alunos que tiraram zero em ambos cursos foi: %i.\n\n", total_zeros);
	printf("----------------------------------------------------------------------\n");
}

void clear_results(void)
{
	curso = 0;
	soma_notas_bsi = 0;
	soma_notas_ads = 0;
	total_alunos_bsi = 0;
	total_alunos_ads = 0;
	total_reprovados_ads = 0;
	total_reprovados_bsi = 0;
	total_aprovados_ads = 0;
	total_aprovados_bsi = 0;
	total_final_ads = 0;
	total_final_bsi = 0;
	acima_nove_ads = 0;
	acima_nove_bsi = 0;
	total_zeros = 0;
}

void print_menu()
{
	printf("------------------------------");
	printf("1 para ver os cursos.");
	printf("2 para inserir um curso.");
	printf("3 para remover um curso.");
	printf("4 para inserir notas de alunos.");
	printf("5 para ver estatisticas de notas.");
	printf("0 para sair.");
	printf("------------------------------");
}

void insert_courses(){
	bool stop_scanf = false;
	char course[COURSE_SIZE], next;

	printf("Voce escolheu inserir cursos\n");
	while(!stop_scanf){
		if(num_courses >= MAX_COURSES || course){
			printf("Numero maximo de cursos atingido.\n");
			return;
		}
		printf("Digite o nome do curso: ");
		fgets(course, sizeof(course), stdin);
		if (next == 's')
		{
			continue;
		}
		else
		{
			stop_scanf = 1;
		}
	}
}



void remove_course(){
	int course_code = 0;
	for (int i = 0; i < num_courses; i++)
	{
		printf("Digite %d para %s", i + 1, courses[i]);
	}
	scanf("%d", course_code);
}

void read_courses(){

}