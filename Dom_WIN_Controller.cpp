//ProjetoDOMINO - Projeto  Domino (controller)
//Carlos Gabriel Gouveia
//Diogo Casari del Pino
//Gustavo Nascimento Zanatta
//Juan Fernando Coucolis Isano

#include "Dom_WIN_Controller.h"
#include "Dom_WIN_View.cpp"

void iniciarPecas()//Função que fornecará valor para os lados da peça.
{
    int j,i;
    int k=0;
    int g;

    for (i=0;i<=6;i++)
        for (j=0;j<=i;j++)
        {
            peca[k].lado1=i;//O lado 1 corresponderá o valor crescente de i
            peca[k].lado2=j;//O lado 2 corresponderá o valor crescente de j
            peca[k].status='0';//Situacao do jogo inicializado como 'O'
            k++;
        }   
        
        for (g=0;g<28;g++)//Mostrará as peças organizadas
        {
         printf("(%d|%d)",peca[g].lado1,peca[g].lado2);
        }
    

}

void embaralhar()//Função que embaralha as peças de dominó
{
    int i,aux;
    int ran;
   	
    for (i=0;i<28;i++)
    {   
     ran = rand()%28;//Determina o resto de 28 como índice da posição dos lados de forma aleatória 

     aux = peca[i].lado1;//Armazena o valor de cada posição
     peca[i].lado1 = peca[ran].lado1;//Troca o valor pela posição aleatoria de ran
     peca[ran].lado1 = aux;//Troca o valor pelo valor armazenado
     
     aux = peca[i].lado2;
     peca[i].lado2 = peca[ran].lado2;
     peca[ran].lado2 = aux;

    }
}

void executarMenu()
{	
	
	while (opc!=9)
	{
		menuGeral();
		 
		switch (opc)
		{	
		case 1: 
		system("cls"); 
		apresentaPecas(); 
		break; 
		
		case 2: 
		system("cls"); 
		embaralhar(); 
		break; 
		}
		
	}
	
}
