#include <stdio.h>
#include <stdlib.h>
//Fila usando encadeamento circular

struct no{
    int dado;
    struct no * proximo;
};

Fila cria_fila(){
    return NULL;
}

int fila_vazia(Fila f){
    if (f == NULL)
        return 1;
    else
        return 0;
}

int insere_fim(Fila *f, int elem){
//Aloca um novo nó e preenche o campo info
Lista N = (Fila) malloc(sizeof(struct no));
if (N == NULL) {
    return 0; //FALHA
}
N->info = elem; //Insere o conteúdo

//Trata fila vazia
if (fila_vazia(*f) == 1){
    N->prox = N; //Novo nó aponta para ele mesmo
    *f = N; //Fila aponta para o novo nó (último nó)
}
else {
    N->prox = (*f)->prox; //Novo nó aponta para o primeiro nó
    (*f)->prox = N; //Último nó aponta para novo nó
    *f = N; //Fila aponta para novo nó (último nó)
}
    return 1;
}

int remove_ini(Fila *f, int *elem){
    if (fila_vazia(*f) == 1) //Trata fila vazia
        return 0;

    Fila aux = (*f)->prox; //Faz aux apontar para o primeiro nó
    *elem = aux->info; //Retorna valor do nó
    if (*f == (*f)->prox) //Trata fila com um nó
        *f = NULL;
    else //Trata fila com + de um elemento
        (*f)->prox = aux->prox;
    free(aux);
    return 1;
}