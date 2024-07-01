#include <stddef.h>
#include <stdlib.h>
#include "cartas_db.h"
#include "cartas.h"

Carta** cartas_db() {
  Carta** cartas = (Carta**) malloc(N_CARTAS * sizeof(Carta*));

  Carta* carta;

  // pimentones

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 8, "lll");
  cartas[0] = carta;

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 2, "l");
  definir_receta(carta, SUMA, 2, "z");
  definir_receta(carta, SUMA, -4, "c");
  cartas[1] = carta;

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 2, "l");
  definir_receta(carta, SUMA, 1, "c");
  definir_receta(carta, SUMA, -2, "p");
  cartas[2] = carta;

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 5, "ll");
  cartas[3] = carta;

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 1, "l");
  definir_receta(carta, SUMA, 1, "t");
  cartas[4] = carta;

  carta = crear_carta('p');
  definir_receta(carta, SUMA, 5, "zc");
  cartas[5] = carta;

  // tomates

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 8, "ccc");
  cartas[6] = carta;

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 2, "c");
  definir_receta(carta, SUMA, 2, "p");
  definir_receta(carta, SUMA, -4, "r");
  cartas[7] = carta;

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 2, "c");
  definir_receta(carta, SUMA, 1, "r");
  definir_receta(carta, SUMA, -2, "t");
  cartas[8] = carta;

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 5, "cc");
  cartas[9] = carta;

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 1, "c");
  definir_receta(carta, SUMA, 1, "z");
  cartas[10] = carta;

  carta = crear_carta('t');
  definir_receta(carta, SUMA, 5, "zl");
  cartas[11] = carta;

  // cebollas

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 8, "ttt");
  cartas[12] = carta;

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 2, "t");
  definir_receta(carta, SUMA, 2, "l");
  definir_receta(carta, SUMA, -4, "z");
  cartas[13] = carta;

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 2, "t");
  definir_receta(carta, SUMA, 1, "z");
  definir_receta(carta, SUMA, -2, "c");
  cartas[14] = carta;

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 5, "tt");
  cartas[15] = carta;

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 1, "t");
  definir_receta(carta, SUMA, 1, "r");
  cartas[16] = carta;

  carta = crear_carta('c');
  definir_receta(carta, SUMA, 5, "rl");
  cartas[17] = carta;

  // lechugas

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 8, "ppp");
  cartas[18] = carta;

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 2, "p");
  definir_receta(carta, SUMA, 2, "r");
  definir_receta(carta, SUMA, -4, "t");
  cartas[19] = carta;

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 2, "p");
  definir_receta(carta, SUMA, 1, "t");
  definir_receta(carta, SUMA, -2, "l");
  cartas[20] = carta;

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 5, "pp");
  cartas[21] = carta;

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 1, "p");
  definir_receta(carta, SUMA, 1, "c");
  cartas[22] = carta;

  carta = crear_carta('l');
  definir_receta(carta, SUMA, 5, "rc");
  cartas[23] = carta; 

  // repollos

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 8, "zzz");
  cartas[24] = carta;

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 2, "z");
  definir_receta(carta, SUMA, 2, "r");
  definir_receta(carta, SUMA, -4, "p");
  cartas[25] = carta;

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 2, "z");
  definir_receta(carta, SUMA, 1, "p");
  definir_receta(carta, SUMA, -2, "r");
  cartas[26] = carta;

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 5, "zz");
  cartas[27] = carta;

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 1, "z");
  definir_receta(carta, SUMA, 1, "l");
  cartas[28] = carta;

  carta = crear_carta('r');
  definir_receta(carta, SUMA, 5, "lc");
  cartas[29] = carta;  

  // zanahorias

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 8, "rrr");
  cartas[30] = carta;

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 2, "r");
  definir_receta(carta, SUMA, 2, "t");
  definir_receta(carta, SUMA, -4, "l");
  cartas[31] = carta;

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 2, "r");
  definir_receta(carta, SUMA, 1, "l");
  definir_receta(carta, SUMA, -2, "z");
  cartas[32] = carta;

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 5, "rr");
  cartas[33] = carta;

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 1, "r");
  definir_receta(carta, SUMA, 1, "p");
  cartas[34] = carta;

  carta = crear_carta('z');
  definir_receta(carta, SUMA, 5, "tl");
  cartas[35] = carta; 

  return cartas;
}

void liberar_cartas_db(Carta** cartas_db) {
  for (int i = 0; i < N_CARTAS; i++) {
    liberar_carta(cartas_db[i]);
  }
  free(cartas_db);
}

void revolver_cartas_db(Carta** array) {
  size_t i;
  for (i = 0; i < N_CARTAS - 1; i++) {
    size_t j = i + rand() / (RAND_MAX / (N_CARTAS - i) + 1);
    Carta* t = array[j];
    array[j] = array[i];
    array[i] = t;
  }
}