#include <stdio.h>
#include <stdlib.h>

int main()
{
    //descobrindo o tamanho ocupado por diferentes tipos de dados
    printf("\nTamanho em bytes de um char:   %u", sizeof(char));
    printf("\nTamanho em bytes de um int:    %u", sizeof(int));
    printf("\nTamanho em bytes de um float:  %u", sizeof(float));
    printf("\nTamanho em bytes de um double: %u", sizeof(double));

    //descobrindo o tamanho ocupado por uma variável
    int Numero_de_Alunos;
    printf("\nTamanho em bytes de Numero_de_Alunos (int): %u", sizeof Numero_de_Alunos);

    //também é possível obter o tamanho de vetores
    char nome[40];
    printf("\nTamanho em bytes de nome[40]: %u", sizeof(nome));

    double notas[60];
    printf("\nTamanho em bytes de notas[60]: %u", sizeof notas);

    return 0;
}
