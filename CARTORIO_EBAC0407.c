#include <stdio.h> // biblioteca de comunica��o com usuario
#include <stdlib.h> // biblioteca  de aloca��o de espa�o em memnoria 
#include <locale.h>  // biblioteca de aloca��o de texto por regi�o
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
	    printf("n�o foi possivel abrir o arquivo, n�o localizado!./n");
	}
	
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas s�o as informa�oes do usu�rio");
		printf("%s", conteudo);
		printf("/n/n");
	}
	
	    system("pause");
    }

        int deletar()
{
		printf("vo�e escolheu deletar nomes!\n");
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
    	printf("Escolha a op��o desejada do menu:\n\n");
     	printf("\t1-Registrar nomes\n");
     	printf("\t2-Consultar nomes\n");
	    printf("\t3-Deletar nomes\n");
	    printf("\t4 -sair do sistema\n\n");
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
        
        case 4:
        	printf("obrigado por ultilizar o sistema!\n");
        	return 0;
        	break;
        default:
        printf("essa op��o n�o est� disponivel!\n");
        system("pause");
        break;
        	
		}
	    

 	}
}
