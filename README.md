# ProyectoFinal

# Receta de puntos

Este proyecto emula el juego "Ensalada de puntos" utilizando el lenguaje de programación C. Es un juego de cartas donde los jugadores intentan acumular puntos mediante la combinación de diferentes vegetales.

## Funciones Principales

cartas_db: Crea y devuelve un arreglo con todas las cartas del juego.

liberar_cartas_db: Libera la memoria asignada a las cartas del juego.

revolver_cartas_db: Baraja las cartas del juego.

crear_carta: Crea una nueva carta con un vegetal específico.

liberar_carta: Libera la memoria asignada a una carta.

definir_receta: Define una receta para una carta específica.

vegetal_string: Devuelve el nombre de un vegetal en forma de cadena.

## Preparación del Juego

preparar_juego: Inicializa el estado del juego barajando las cartas y distribuyéndolas en pilas y mercados.

liberar_juego: Libera la memoria asignada al juego.

imprimir_receta: Imprime una receta de una carta.

imprimir_pilas: Imprime el estado actual de las pilas de cartas.

imprimir_mercados: Imprime el estado actual del mercado de cartas.

imprimir_estado_juego: Imprime el estado completo del juego.

## Jugador
crear_jugador: Crea un nuevo jugador con listas de vegetales y recetas vacías.
liberar_jugador: Libera la memoria asignada a un jugador.

## Funciones de Juego
menu: Muestra el menú principal y devuelve la opción seleccionada por el usuario.
sacar_carta_pila: Permite al jugador sacar una carta de una de las pilas.
sacar_carta_mercado: Permite al jugador sacar una carta del mercado.
turno_jugador: Maneja el turno del jugador humano.
turno_ia: Maneja el turno de la "IA".
vegetal_is_equal: Compara dos vegetales para el uso en el mapa de puntajes.
calcular_puntaje: Calcula el puntaje total del jugador en función de las recetas completadas.
jugar_partida: Controla el flujo del juego, alternando turnos entre el jugador y la "IA", y determinando el ganador al final


## ¿Cómo ingresar?
Fácil, ingresar a este replit público y hacerle fork. https://replit.com/@smurfdoariel/Proyecto-Final?v=1

## ¿Cómo testear?
Al usar RUN, se iniciará el juego y dará la opción de Jugar o Salir. Al presionar jugar, en el terminal aparecerá el juego de mesa. Como se mencionó en la presentación, solo hay 2 opciones por turno, tomar una receta o un vegetal/fruta del mercado. 
Para poder tomar una receta de una de las 3 pilas, se debe ingresar 1, 2 o 3 (referente a la pila). Para tomar un vegetal/fruta, se debe presionar a, b , c, d, e o f. Luego, el sistema va sumando los puntos y al final dará el ganador.

Estudiantes(s): -Ariel Ignacio Villar (20.447.126-6)
