# proyecto-final-battleship-proyecto2_battleship
proyecto-final-battleship-proyecto2_battleship LicaJeroIvan

UTEC - 30/11/19
PROECTO FINAL: BattleShip Multiplayer
INTEGRANTES: 
-Jeronimo Jose Harmsen Arrarte
-Ivan Emilius Mamani Arisaca


INTRO
BattleShip: Es un juego de 2 jugadores donde el P1 recibe y lee archivos para posicionar la flota y atacar; el P2 escribe y envia las posiciones de la flota tanto como los ataques hacia la flota enemiga. Ambos jugadores juegan de manera autonoma, sin embargo funcionan de manera diferente. El P1 recibe las posiciones predeterminadas junto a los ataques aleatoreo. El P2 escribe las posiciones de manera aleatorea y cuenta con un algoritmo para atacar horizontal o verticalmente adyasente cuando un disparo fue exitoso. Una vez alguno de los dos jugadores haya alcansado el puntaje maximo de 18, este habra ganado el juego.

Reglas: Utilizamos las reglas clasicas de BattleShip; tenemos 4 tipos de naves diferentes 1 Aircraft Carries(4), 2 Battle Cruiser(3), 3 Submarines(2) y 4 Torpedo Boat(1). Los hit points de cada nave estan en parentesis y estos representan cuantos disparos pueden recibir antes de ser hundidos. Cuando todas las naves hayan sido undidas, se imprimirá un mensaje anunciando el ganador de la partida. Cada una de las naves debera se posicionará en el tablero de manera que no esten superpuestas una sobre otra. Luego de posicionar toda la flota, comenienza el ataque. Cada jugador ataca el tablero opuesto, un disparo puede acertar como fallar. Los ataques continuaran por turnos hasta llegar al puntaje máximo, lo cual hara que el juego finalice anunciando un ganador



Importante: En los archivos en este github hay aux.h y funcionesaux.h, porfavor no considerar ninguno de estos archivos al clonar o descargar el respositorio. El archivo que debera ser tomado en consideracion es auxx.h. Disculpas la molestia.
Adicionalemente, este juego esta diseñado con el proposito de simular una partida entre P1 y P2. Cambios son necesarios para implementar el codigo de battleShip a un servido Multiplayer, sin embargo la lectura y la escritura de archivos ya han sido desarrollado para cumplir esa funcion.


Cualquier duda pueden comunicarse a: jeronimo.harmsen@utec.edu.pe
Gracias por su tiempo
