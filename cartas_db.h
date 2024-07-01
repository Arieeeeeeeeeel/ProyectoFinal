#ifndef CARTAS_DB_H
#define CARTAS_DB_H
#include "cartas.h"
#include "tdas/list.h"

static const size_t N_CARTAS = 36;

// Función que obtiene todas las cartas del juego.
Carta** cartas_db();
// Función que libera la memoria de todas las cartas del juego.
void liberar_cartas_db(Carta** cartas_db);
// Función que revuelve las cartas del juego.
void revolver_cartas_db(Carta** cartas_db);

#endif