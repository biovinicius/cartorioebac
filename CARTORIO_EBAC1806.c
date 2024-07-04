#include <stdio.h> // biblioteca de comunicação com usuario
#include <stdlib.h> // biblioteca  de alocação de espaço em memnoria 
#include <locale.h>  // biblioteca de alocação de texto por região
#include <string.h>  // biblioteca responsavel por cuidar das strings


    int registro()
	{
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("digite o cpf a ser cadastrador: ");
    scanf("%s", cpf);
    
    strcpy(arquivo,cpf); // responsavel por copiar os valores das strings
    
    FILE*file; // cria os aqrquivo
    file=fopen(arquivo,"w"); // cria orquivo
    fprintf(file,cpf); // salvo valor variavel
    fclose (file); // fecha o arquivo
    
    file=fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o nome a ser cadastrado:");
    scanf("%s", nome);
    
    file=fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
    
    file=fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    
    printf("digite o sobrenome a ser cadastrado:");
    scanf("%s", sobrenome);
    
    file=fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file=fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    
    printf("digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file=fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
}
    
    
   
   int consulta()
   {
	    setlocale(LC_ALL, "portuguese");

	   char cpf[40];
	   char conteudo[200];
	
	    printf("digite o CPF a ser consultado: ");
	    scanf("%s",cpf);
	
	    FILE *file;
        file = fopen(cpf,"r");	
	    if(file==NULL)
	{ 
	    printf("não foi possivel abrir o arquivo, não localizado!./n");
	}
	
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas são as informaçoes do usuário");
		printf("%s", conteudo);
		printf("/n/n");
	}
	
	    system("pause");
    }

        int deletar()
{
		printf("voçe escolheu deletar nomes!\n");
        system("pause");
}
int main()
    {
	    int opcao=0;
        int laco=1;
	
	    for(laco=1;laco=1;)
	{
		system("cls");
	
	    setlocale(LC_ALL, "portuguese");
	    printf("### cartorio da EBAC ###\n\n"); 
    	printf("Escolha a opção desejada do menu:\n\n");
     	printf("\t1-Registrar nomes\n");
     	printf("\t2-Consultar nomes\n");
	    printf("\t3-Deletar nomes\n");
	    scanf("%d",&opcao);
	
	
	
         system("cls") ;

        switch(opcao)
	{
		case 1:
	     
		registro();
		break;
		
		case 2:
		
		consulta();
		break;
		
		case 3:
		
		deletar();
		break;
        
        default:
        printf("essa opção não está disponivel!\n");
        system("pause");
        break;
        	
		}
	    

 	}
}
