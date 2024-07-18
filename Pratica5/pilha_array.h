/*
 * pilha.h
 *
 *  Created on: 10 de mai de 2022
 *      Author: ALUNO
 */

#ifndef PILHA_ARRAY_H_
#define PILHA_ARRAY_H_
#include <iostream>
#include <exception>
#include <string.h>
#include<stdio.h>

using namespace std;

template <class T> class Pilha {
private:
	int capac,
		tam;
	T * items;

	public: Pilha(int capacidade) {
		this->capac = capacidade;
		items = new T[capac];
		this->tam = 0;
		cout << "Pilha criadaaa!" << endl;
	}

	~Pilha() {
		delete [] items;
		cout << "Pilha destru�daaa!" << endl;
	}

	void empilha(T item) {
		if(tam > capac){
			throw "Estouro de Pilha!";
		}
			this->items[tam] = item;
			this->tam++;
	}

	T desempilha() {
		if(tam < 0){
			throw "Pilha vazia!";
		}
		this->tam--;
		return items[tam];
	}

	int tamanho() {
		return this->tam;
	}

};


#endif /* PILHA_ARRAY_H_ */

