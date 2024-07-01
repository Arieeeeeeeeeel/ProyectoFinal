#ifndef DEFINICIONES_H
#define DEFINICIONES_H

#include "tdas/list.h"

typedef char Vegetal;
static const Vegetal ZANAHORIA = 'z';
static const Vegetal PIMENTON = 'p';
static const Vegetal TOMATE = 't';
static const Vegetal LECHUGA = 'l';
static const Vegetal CEBOLLA = 'c';
static const Vegetal REPOLLO = 'r';

typedef char TipoRegla;
static const TipoRegla SUMA = '+';

typedef struct {
  TipoRegla tipo;
  int puntaje;
  Vegetal* vegetales;
} Receta;

typedef struct {
  Vegetal vegetal;
  List* recetas; // List<Receta>
} Carta;

#endif