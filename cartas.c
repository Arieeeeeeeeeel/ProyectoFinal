#include "cartas.h"
#include <string.h>
#include "tdas/list.h"
#include "tdas/map.h"

// Función que crea una carta.
Carta* crear_carta(Vegetal vegetal) {
  Carta* carta = malloc(sizeof(Carta));
  carta->vegetal = vegetal;
  carta->recetas = list_create();
  return carta;
}

// Función que libera la memoria de una carta.
void liberar_carta(Carta *carta) {
  Receta* receta = list_first(carta->recetas);
  while (receta != NULL) {
    free(receta);
    receta = list_next(carta->recetas);
  }
  list_clean(carta->recetas);
  free(carta);
}

// Función que define una receta para una carta.
void definir_receta(Carta *carta, TipoRegla tipo, int puntaje, Vegetal* vegetales) {
  Receta* receta = malloc(sizeof(Receta));
  receta->tipo = tipo;
  receta->puntaje = puntaje;
  receta->vegetales = vegetales;
  list_pushBack(carta->recetas, receta);
}

const char* vegetal_string(Vegetal v) {
  switch (v) {
    case 'z': return "zanahoria";
    case 'p': return "pimenton";
    case 't': return "tomate";
    case 'l': return "lechuga";
    case 'c': return "cebolla";
    case 'r': return "repollo";
    default: return "desconocido";
  }
}
