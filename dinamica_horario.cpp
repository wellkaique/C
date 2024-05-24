

#include <stdio.h>
#include <stdlib.h>




// Estrutura para armazenar hor�rio
typedef struct Horario {
  int hora; // 0-23
  int minuto; // 0-59
  int segundo; // 0-59
} Horario;

// Coment�rio: Essa estrutura define um novo tipo de dado chamado `Horario` com tr�s campos: `hora`, `minuto` e `segundo`. Cada campo � um n�mero inteiro com seus pr�prios limites.

// Exemplo de uso
Horario horario = {10, 30, 0}; // Cria um hor�rio com 10h30min00s

// Acessando os campos
printf("Hora: %d\n", horario.hora); // Imprime "Hora: 10"
printf("Minuto: %d\n", horario.minuto); // Imprime "Minuto: 30"
printf("Segundo: %d\n", horario.segundo); // Imprime "Segundo: 0"

