/*
 * arranjo.h
 *
 *  Created on: 27 de abr de 2022
 *      Author: ALUNO
 */

#ifndef ARRANJO_H_
#define ARRANJO_H_

#include <iostream>
#include <exception>
#include <string.h>
using namespace std;

class IndiceInvalido: public exception {
protected:
	char msg[100];
public:
	IndiceInvalido(const char * ii) {
		strcpy(msg, ii);
	}
	virtual const char * what() {
		return msg;
	}
};

template<class T> class Arranjo {
private:
	int tamanho;
	T * items;
public:
	Arranjo(int tam) {
		items = new T[tam];
		this->tamanho = tam;
//		cout << "Arranjo criado!" << endl;
	}
	virtual ~Arranjo() {
		delete [] items;
//		cout << "Arranjo destru�do!" << endl;
	}
	virtual T get(int idx) {
		if (idx >= tamanho) {
			throw IndiceInvalido("Indice Invalido!");
		} else {
			return this->items[idx];
		}
	}

	virtual void set(int idx, const T & item) {
		if (idx >= tamanho) {
			throw IndiceInvalido("Indice Invalido!");
		} else {
			this->items[idx] = item;
		}

	}

	virtual void exibir();
};

template<class T> void Arranjo<T>::exibir() {
	for (int i = 0; i < tamanho; i++) {
		cout << "<" << i << ">: <" << items[i] << ">" << endl;
	}
}

#endif /* ARRANJO_H_ */
