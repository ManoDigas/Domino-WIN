//ProjetoDOMINO - Projeto  Domino (view.h)
//Carlos Gabriel Gouveia
//Diogo Casari del Pino
//Gustavo Nascimento Zanatta
//Juan Fernando Coucolis Isano

#include "Dom_WIN_View.h"

int menuGeral()//Função para exibir o menu do jogo.
{	
	
    printf ("\n\n1.Mostrar Pecas");
    printf ("\n2.Embaralhar pecas");
    printf ("\n9.Sair");
    printf ("\nOpcao:");
    scanf ("%d",&opc);
	return opc; 
}

void apresentaPecas()
{
	for (i=0;i<28;i++)
    {
        printf("(%d|%d)",peca[i].lado1,peca[i].lado2);//Mostra as peças de forma aleatória
    }
}
