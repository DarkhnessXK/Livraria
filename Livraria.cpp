#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int i = 0;  //variavel da estrutura de repetição

struct livraria {
char titulo[25];
char autor[20];
char estilo[10];
int codigo;
float preco;
	
};
typedef struct livraria livro;
livro vetlivro[50];
char ch; 
int numlivros = 0;

void incluir(){
printf("\ndigite o titulo do livro: \n");
scanf("%s",&vetlivro[i].titulo);
printf("\ndigite o autor do livro: \n");
scanf("%s",&vetlivro[i].autor);
printf("\ndigite o estilo do livro: \n");
scanf("%s",&vetlivro[i].estilo);
printf("\ndigite o codigo de cadastro do livro: \n");
scanf("%i",&vetlivro[i].codigo);
printf("\ndigite o preco do livro: \n");
scanf("%f",&vetlivro[i].preco);
i++;
numlivros++;
}


void listar_nome (){
printf("\nTitulos de Livros Cadastrados: \n");	
for(i=0;i<50;i++){
	if(strcmp(vetlivro[i].titulo,"") == 0){
		i++;		
	
		}
else{
	printf("\nTitulo: %s \n",vetlivro[i].titulo);
}	
}	
	
	
}

void procurar_autor (){
char autor[20];

printf("\nDigite o nome do autor para pesquisar suas obras: \n");
scanf("%s",&autor);
printf("\nLivros do Autor %s : \n",autor);
for(i=0;i<50;i++){

if(strcmp (vetlivro[i].autor,autor) == 0){

printf("\nTitulo: %s\n",vetlivro[i].titulo);
printf("\nEstilo: %s\n",vetlivro[i].estilo);
printf("\nCodigo: %i\n",vetlivro[i].codigo);
printf("\nPreco: %f\n",vetlivro[i].preco);
printf("\n---------------------------------------------------\n");
}
}
if(strcmp (vetlivro[i].autor,autor) != 0){

printf("\nnenhum outro registro encontrado\n");

}	
}

void procurar_titulo(){
char titulo[25];

printf("\nDigite o nome do titulo do livro a pesquisar: \n");
scanf("%s",&titulo);
printf("\nLivros : \n");
for(i=0;i<50;i++){

if(strcmp (vetlivro[i].titulo,titulo) == 0){

printf("\nAutor: %s\n",vetlivro[i].autor);
printf("\nEstilo: %s\n",vetlivro[i].estilo);
printf("\nCodigo: %i\n",vetlivro[i].codigo);
printf("\nPreco: %f\n",vetlivro[i].preco);
printf("\n---------------------------------------------------\n");
}
}
if(strcmp (vetlivro[i].titulo,titulo) != 0){

printf("\nnenhum outro registro encontrado\n");

}	
}

void procurar_estilo(){
char estilo[10];

printf("\nDigite o nome do estilo do livro a pesquisar: \n");
scanf("%s",&estilo);
printf("\nLivros do Estilo %s : \n",estilo);
for(i=0;i<50;i++){

if(strcmp (vetlivro[i].estilo,estilo) == 0){
	
printf("\nTitulo: %s\n",vetlivro[i].titulo);
printf("\nAutor: %s\n",vetlivro[i].autor);
printf("\nCodigo: %i\n",vetlivro[i].codigo);
printf("\nPreco: %f\n",vetlivro[i].preco);
printf("\n---------------------------------------------------\n");
}
}
if(strcmp (vetlivro[i].estilo,estilo) != 0){

printf("\nnenhum outro registro encontrado\n");

}	
}

void media_preco(){
float media,total;

printf("\nA media de preco dos livros e: \n");
for(i=0;i<50;i++){
if(vetlivro[i].preco != 0){
	
total = total + vetlivro[i].preco;
}
media = total / numlivros;		
}
if(numlivros>0){


printf("\nmedia: %f\n",media);
}
if(numlivros == 0){
	printf("\nSem livros cadastrados\n");
}

}	
	

int main(){

printf("\nDigite a opcao Desejada: \n");
printf("\n-------------------------------------------------------------\n");
printf("\nDigite I para incluir um livro\n");
printf("\nDigite L para listar o nome de todos os livros\n");
printf("\nDigite A para procurar livro por autor\n");
printf("\nDigite T para procurar livro por Titulo\n");
printf("\nDigite E para procurar livro por Estilo\n");
printf("\nDigite M para calcular a media de preco de todos os livros\n");
printf("\nDigite S para Sair\n");
printf("\n-------------------------------------------------------------\n");

scanf("%c",&ch);

switch(ch){
	
	
	case 'i':
		
		incluir();
		break;
	
	case 'l':
		
		listar_nome();
		break;
	
	case 'a':
		
		procurar_autor();
		break;
		
	case 't':
		
		procurar_titulo();
		break;
		
	case 'e':
		procurar_estilo();
		
		break;
		
	case 'm':
		
		media_preco();
		break;
		
	case's':
		
		return 0;
		
		break;
	default: 
	
		printf("\nopcao incorreta\n");
		break;
}
	
	getch();         //permita pausas durante a execução do programa
	system("cls");  //limpa a tela
	main();         //retonar a função principal
	return 0;
}
