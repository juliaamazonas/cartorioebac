#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca para reconhecimento de string

int registro()
{
	printf("REGISTRO DE NOMES\n");
	system("pause"); //para pausar a tela após colocar a opção
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf); //armazenar a variavel como string
	
	strcpy(arquivo, cpf);//copiar a string cpf para o nome do arquivo
	
	FILE *file; //criar o arquivo na pasta com a info do usuário cadastrado
	file = fopen(arquivo, "w"); // criar o arquivo e w é para escrever em um arquivo novo
	fprintf(file,cpf); //salvar a variavel cpf no arquivo
	fclose(file); //fecha o arquivo 

	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,"\n"); //abrir e atualizar com um espaço
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,nome); //salvar a variavel "nome" no arquivo
	fprintf(file,"NOME:"); 
	fclose(file); //fecha o arquivo
	
	printf("Digite o Nome a ser cadastrado: ");
	scanf("%s",nome); //armazenar a variavel como string
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,nome); //salvar a variavel "nome" no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,"\n");  
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,sobrenome); 
	fprintf(file,"SOBRENOME:"); 
	fclose(file); //fecha o arquivo
	
	printf("Digite o Sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome); //armazenar a variavel como string
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,sobrenome); //salvar a variavel "sobrenome" no arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,"\n"); 
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,cargo); 
	fprintf(file,"CARGO:"); 
	fclose(file); //fecha o arquivo
	
	printf("Digite o Cargo a ser cadastrado: ");
	scanf("%s",cargo); //armazenar a variavel como string
		
	file = fopen(arquivo, "a"); // abrir o arquivo e "a" é para alterar em um arquivo existente
	fprintf(file,cargo); 
	fclose(file); //fecha o arquivo
				
	system("pause");
		
}

int consulta()
{

	setlocale(LC_ALL, "Portuguese"); //Lingugem definida 
			
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf); //armazenar a variavel como string
	
	FILE *file; //consulta o arquivo
	file = fopen(cpf,"r"); // consulta o arquivo e r é para ler o conteúdo (read)
	
	if(file == NULL)
		{
			printf("Usuário não localizado. \n");
		}
	
	while(fgets(conteudo, 200, file) != NULL)
		{
			printf("Usuário localizado: \n");
			printf("%s",conteudo); //printar a variavel conteudo como string
			printf("\n\n");
		}

	system("pause");

}

int deletar()
{
	printf("DELETE DE NOMES\n");
	system("pause");
}


int main()
{
	int opcao=0; //espaço da variável
	
	int laco=1; //variavel do for
	for(laco=1;laco=1;)
	{
	
	system("cls");
		
	setlocale(LC_ALL, "Portuguese"); //Lingugem definida 
	
	printf("~~ Arquivo de Alunos da EBAC ~~\n\n");//inicio do menu
	printf("Selecione uma das opções abaixo:\n\n");
	printf("\t1 - Registrar\n");
	printf("\t2 - Consultar\n");
	printf("\t3 - Deletar\n\n");
	printf("Digite sua opção e aperte ENTER:");//fim do menu
	
	scanf("%d" , &opcao); //percentagem com o caractere d serve para armazenar a info do numero inteiro e junto com o caracter & informa que o numero foi armazenado na variavel
	
	system("cls");//deletar mensagens anteriores
	
	switch(opcao) //condicional switch case da variavel do menu
	{
		case 1:
		registro();//chamando a função
		break;//para finalizar a condicional switch case 
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Opção indisponível. Digite opção válida.\n");
		system("pause");
		break;
		 
	}//final da condicional switch case
	
	}//final do for

    }//final do int main

