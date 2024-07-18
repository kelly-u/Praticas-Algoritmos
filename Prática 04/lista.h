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
	T *items;
	int capac, tamAtual;

public:
	Lista(int capacidade) {
		this->capac = capacidade;
		items = new T[capac];
		this->tamAtual = 0;
		cout << "Lista criadaaa!" << endl;
	}
	~Lista() {
		delete[] items;
		cout << "Lista destru�daaa!" << endl;
	}

	/* OK */
	void adiciona(const T &item) {
		if (this->tamAtual >= this->capac) {
			throw "Lista cheia!";
		}

		items[tamAtual] = item;
		this->tamAtual++;

	}

	/* OK */
	T pega(int idx) {

		if (idx < 1 || idx > this->capac) {
			throw "Item inv�lido";
		}
		return items[--idx];
	}

	/* OK */
	void insere(int idx, const T &item) {
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
		}
		for (int i = idx - 1; i <= tamAtual; i++) {
			this->items[i] = items[i + 1];
		}
		this->tamAtual--;
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
