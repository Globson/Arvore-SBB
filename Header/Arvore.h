#include <stdio.h>
#include <stdlib.h>
typedef enum{
  Vertical,Horizontal
}TipoInclinacao;
typedef struct TipoNo{
  int Chave;
  TipoNo* Esq;
  TipoNo* Dir;
  TipoInclinacao BitE;
  TipoInclinacao BitD;
}TipoNo;
typedef TipoNo* TipoApontador;
 //Morenaa tropicanaa eu quero o teo sabooooooor!!!/// Aiaiaiaiiiiii//
 // Da manga rosa eu quero o gosto e o sumoo!//
