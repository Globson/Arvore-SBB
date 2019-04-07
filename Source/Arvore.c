#include "../Header/Arvore.h"
void EE(TipoApontador *Ap){
  TipoApontador Ap1;
  Ap1 = (*Ap)->Esq;
  (*Ap)->Esq = Ap1->Dir;
  Ap1->Dir = *Ap;
  Ap1->BitE = Vertical;
  (*Ap)->BitE = Vertical;
  *Ap = Ap1;
}
//Quem sabe ainda eu sou uma garotinhaaa! Esperando o onibus da escolaaa sozinhaa! Calçada com as minhas meias 3/4 resando baixo pelos cantooos..
//Quem sabe oo principe virou um chatooo! Que vive dando no meu sacooo!
//Eu so peço a deeeeeeuuus um pouco de malandrageeeemm!! Pois ainda sou criançaaa e nao conheço a verdadeeee!//
void ED(TipoApontador *Ap){
  TipoApontador Ap1,Ap2;
  Ap1 = (*Ap)->Esq;
  Ap2 = Ap1->Dir;
  Ap1->BitD = Vertical;
  (*Ap)-> BitE = Vertical;
  Ap1->Dir = Ap2->Esq;
  Ap2->Esq = Ap1;
  (*Ap)->Esq = Ap2->Dir;
  Ap2->Dir = *Ap;
  *Ap=Ap2;
}
void DD(TipoApontador *Ap){
  TipoApontador Ap1;
  Ap1 = (*Ap)->Dir;
  (*Ap)->Dir = Ap1->Esq;
  Ap1->Esq = *Ap;
  Ap1->BitD = Vertical;
  (*Ap)->BitD = Vertical;
  *Ap = Ap1;
}
void DE(TipoApontador *Ap){
  TipoApontador Ap1,Ap2;
  Ap1 = (*Ap)->Dir;
  Ap2 = Ap1->Esq;
  Ap1->BitE = Vertical;
  (*Ap)->BitD = Vertical;
  Ap1->Esq = Ap2 ->Dir;
  Ap2->Dir = Ap1;
  (*Ap)->Dir = Ap2->Esq;
  Ap2->Esq = *Ap;
  *Ap = Ap2;
}


//Hold the LINE!! POOOOOOOOOWW POWW ROWW ROWW ROOOWWWWWWW!
