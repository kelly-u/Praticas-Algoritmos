/*
 * pilha.h
 *
 *  Created on: 10 de mai de 2022
 *      Author: ALUNO
 */

#ifndef PILHA_H_
#define PILHA_H_
#include <iostream>
#include <exception>
#include <string.h>
#include<stdio.h>

using namespace std;

template <class T> class Pilha {
private:
	int capac,
		topo,
		taman;
	T * items;

	public: Pilha(int capacidade) {
		this->capac = capacidade;
		items = new T[capac];
		this->topo = 0;
		this->taman = 0;
		cout << "Pilha criadaaa!" << endl;
	}

	~Pilha() {
		delete [] items;
		cout << "Pilha destruídaaa!" << endl;
	}

	void empilha(T item) {
		if(topo < capac){
			this->items[topo] = item;
			topo ++;
			this->taman++;
		}
		else{
			throw "Estouro de Pilha!";
		}
	}

	T desempilha() {
		if(topo > 0){
			topo --;
			this->taman--;
		}
		else{
			throw "Pilha vazia!";
		}
		return items[topo];
	}

	int tamanho() {
		return this->taman;
	}

};

#endif /* PILHA_H_ */

