#ifndef CARTAS_H
#define CARTAS_H
#include "definiciones.h"

// Función que crea una carta.
Carta* crear_carta(Vegetal vegetal);
// Función que libera la memoria de una carta.
void liberar_carta(Carta *carta);
// Función que define una receta para una carta.
void definir_receta(Carta *carta, TipoRegla tipo, int puntaje, Vegetal* vegetales);
// Función que obtiene el nombre de un vegetal.
const char* vegetal_string(Vegetal v);

#endif