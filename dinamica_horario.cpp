

#include <stdio.h>
#include <stdlib.h>




// Estrutura para armazenar horário
typedef struct Horario {
  int hora; // 0-23
  int minuto; // 0-59
  int segundo; // 0-59
} Horario;

// Comentário: Essa estrutura define um novo tipo de dado chamado `Horario` com três campos: `hora`, `minuto` e `segundo`. Cada campo é um número inteiro com seus próprios limites.

// Exemplo de uso
Horario horario = {10, 30, 0}; // Cria um horário com 10h30min00s

// Acessando os campos
printf("Hora: %d\n", horario.hora); // Imprime "Hora: 10"
printf("Minuto: %d\n", horario.minuto); // Imprime "Minuto: 30"
printf("Segundo: %d\n", horario.segundo); // Imprime "Segundo: 0"

