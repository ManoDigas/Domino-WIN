//ProjetoDOMINO - Projeto  Domino (model)
//Carlos Gabriel Gouveia
//Diogo Casari del Pino
//Gustavo Nascimento Zanatta
//Juan Fernando Coucolis Isano

#include "Dom_WIN_Model.h"

typedef struct stpeca //Estrutura de dados contendo os lados do dominó e a situação atual do jogo.
{
    int lado1;
    int lado2;
    char status;//Representa diferentes estados do jogo

} tipoPeca;

tipoPeca peca[28];//Define a quantidade de peças 
tipoPeca aux;
