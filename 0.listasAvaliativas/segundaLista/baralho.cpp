#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Carta {
  char valor;
  char naipe;
  char cor;
};

void contar_jokers(vector<Carta> jogo, int &fraudes) {
  int jokers_preto = 0;
  int jokers_vermelho = 0;
  for (int i = 0; i < (int)jogo.size(); i++) {
    if (jogo[i].valor == '0') {
      jokers_preto += jogo[i].cor == 'P';
      jokers_vermelho += jogo[i].cor == 'V';
    }
  }

  if (jokers_preto + jokers_vermelho > 3) {
    fraudes += jokers_preto + jokers_vermelho - 3;
  }
}

bool ja_contou (vector<Carta> repetidos, Carta carta) {
  for (int i = 0; i < (int) repetidos.size(); i++) 
    if (
      repetidos[i].valor == carta.valor &&
      repetidos[i].naipe == carta.naipe &&
      repetidos[i].cor == carta.cor
    ) {
      return true;
    }
    return false;
}

void contar_cartas (vector<Carta> jogo, int &fraudes) {
  vector<Carta> repetidos;

  for (int i = 0; i < (int) jogo.size(); i++) {
    Carta carta_atual = jogo[i];
    int vezes = 1;

    for (int j = 0; j < (int) jogo.size(); j++) {
      Carta carta_sendo_lida = jogo[j];

      if (j == i || carta_atual.valor == '0' || carta_sendo_lida.valor == '0') continue;

      if (carta_atual.valor == carta_sendo_lida.valor && carta_atual.naipe == carta_sendo_lida.naipe && carta_atual.cor != carta_sendo_lida.cor && !ja_contou(repetidos, carta_atual)) {
        vezes++;
        if (vezes > 2) {
          repetidos.push_back(carta_atual);
        }
      }
      
      if (
        carta_atual.valor == carta_sendo_lida.valor &&
        carta_atual.naipe == carta_sendo_lida.naipe &&
        carta_atual.cor == carta_sendo_lida.cor &&
        !ja_contou(repetidos, carta_atual)
      ) {
        repetidos.push_back(carta_atual);
        fraudes++;
      }
    }
    if (vezes > 2) {
      fraudes += vezes - 2;
    }
  }
}

int contar_fraudes (vector<Carta> jogo) {
  int qnt = 0;
  contar_jokers(jogo, qnt);
  contar_cartas(jogo, qnt);
  return qnt;
}

int main () {

  vector<Carta> jogo;
  fstream arquivo("entrada.txt");

  for (int i = 0; i < 5; i++) {
    int qnt;
    arquivo >> qnt;
    for (int c = 0; c < qnt; c++) {
      Carta carta;
      char valor, naipe, cor;
      arquivo >> valor >> naipe >> cor;
      carta.valor = valor;
      carta.naipe = naipe;
      carta.cor = cor;
      jogo.push_back(carta);
    }
  }

  int n = contar_fraudes(jogo);
  cout << n << endl;
  return 0;
}