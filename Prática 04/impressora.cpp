/*
 * impressora.cpp
 *
 *  Created on: 28 de set de 2017
 *      Author: ramide
 */
#include <stdlib.h> // rand()
#include <iostream> // cout

#include <thread>
#include <chrono>
using namespace std;

#include "fila.h"

using namespace std;

int mainI() {
	Fila<int> impressora(10);
	int i = 0;
	while (1) {
		if ((rand() % 100) < 70) {
			if (!impressora.cheia()) {
				cout << "Adicionado documento " << ++i << endl;
				impressora.enfileira(i);
			}
		}

		cout << "Status: " << impressora.tamanho() << " item(s) na fila" << endl;

		if ((rand() % 100) < 90) {
			if (!impressora.vazia()) {
				cout << "Imprimindo documento " << impressora.desenfileira() << endl;
			}
		}
	}

	return 0;
}



