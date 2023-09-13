/*
 * fila.h
 *
 *  Created on: 10 de mai de 2022
 *      Author: ALUNO
 */

#ifndef FILA_H_
#define FILA_H_

#include <iostream>
using namespace std;

template<class T> class Fila {
private:
	int capac, taman, pInicial;
	T * items;

public:
	Fila(int cap) {
		this->capac = cap;
		items = new T[capac];
		this->taman = 0;
		this->pInicial = 0;
		cout << "Fila criadaaa!" << endl;
	}

	~Fila() {
		delete [] items;
		cout << "Fila destruídaaa!" << endl;
	}


	void enfileira(const T & item) {
		if (this->taman < this->capac) {
			this->items[(this->pInicial + this->taman) % this->capac] = item;
			this->taman++;
		} else {
			throw "Fila cheia!";
		}
	}

	T desenfileira() {
		int pIniAntiga = this->pInicial;
		if (this->taman > 0) {
			this->pInicial = ((this->pInicial + 1) % this->capac);
			this->taman --;
		} else {
			throw "Fila vazia!";
		}
		return items[pIniAntiga];
	}

	int cheia() {
		return capac == this->taman;
	}

	int vazia() {
		return taman == 0;
	}

	int tamanho() {
		return this->taman;
	}

};

#endif /* FILA_H_ */
