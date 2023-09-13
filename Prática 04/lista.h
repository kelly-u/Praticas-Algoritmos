/*
 * lista.h
 *
 *  Created on: 11 de jul de 2022
 *      Author: ALUNO
 */

#ifndef LISTA_H_
#define LISTA_H_

#include <iostream>
using namespace std;

template<class T> class Lista {
private:
	T * items;
	int capac, tamAtual, temp;

public:
	Lista(int capacidade) {
		this->capac = capacidade;
		items = new T[capac];
		this->tamAtual = 0;
		this->temp = 0;
		cout << "Lista criadaaa!" << endl;
	}
	~Lista() {
		delete[] items;
		cout << "Lista destruídaaa!" << endl;
	}

	/* OK */
	void adiciona(const T & item) {
		if (this->tamAtual >= this->capac) {
			throw "Lista cheia!";
		} else {
			items[tamAtual] = item;
			this->tamAtual++;
		}
	}

	/* OK */
	T pega(int idx) {

		if (idx < 1 || idx > this->capac) {
			throw "Item inválido";
		}else {
			idx--;
			return items[idx];
		}
	}

	/* OK */
	void insere(int idx, const T & item) {
		if (this->tamAtual >= this->capac) {
			throw "Lista cheia!";
		}
		for (int i = this->tamAtual; i > idx - 1; i--) {
			items[i] = items[i - 1];
		}
		items[idx - 1] = item;
		this->tamAtual++;
	}

	/* OK */
	void remove(int idx) {
		if (idx < 1 || idx > this->tamAtual) {
			throw "Índice inválido";
		} else {
			this->temp = idx--;
			for (int i = idx; i <= tamAtual; i++) {
				this->items[i] = items[temp];
				this->temp++;
			}
			this->tamAtual--;
		}
	}

	/* OK */
	void exibe() {
		for (int i = 0; i <= this->tamAtual; i++) {
			cout << items[i] << "  ";
		}
	}

	/* OK */
	int tamanho() {
		return this->tamAtual;
	}
}
;

#endif /* LISTA_H_ */
