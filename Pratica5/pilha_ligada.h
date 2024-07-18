/*
 *  pilha_ligada.h
 *
 *  Created on: 18 de jul. de 2024
 *      Author: ALUNO
 */

#ifndef PILHA_LIGADA_H_
#define PILHA_LIGADA_H_

template<class T>
class PilhaLigada {
private:
// Atributos para array de items, capacidade e topo da pilha

public:
	PilhaLigada(int capacidade) {
	// instancia array de items, inicializa capacidade e topo

	}

	~PilhaLigada() {
	// destroy array de items

	}

	void empilha(T item) {
	// empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
		// alocar novo NÓ;
		// se falhar -> “stack overflow”
		// colocar dados em NÓ->dados
		// fazer NÓ->prox apontar para TOPO
		// fazer TOPO apontar para NÓ

	}

	T desempilha() {
	// remove um item do topo da pilha; lança “Pilha vazia” se vazia
		// verificar se o TOPO é NULO;
		// se for -> “stack underflow”
		// pegar TOPO e salvar em variável TMP
		// fazer TOPO igual a TMP->prox
		// desalocar TMP
		// retorna dados
	}

	int tamanho() {
	// retorna o número de elementos na pilha.
	}
};

#endif /* PILHA_LIGADA_H_ */
