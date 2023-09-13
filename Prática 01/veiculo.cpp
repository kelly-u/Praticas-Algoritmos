/*
 * veiculo.cpp
 *
 *  Created on: 11 de abr de 2022
 *      Author: ALUNO
 */

#include "veiculo.h"
using namespace std;

int Veiculo::getNumRodas() {
	return num_rodas;
}

void Veiculo::setNumRodas(int numRodas) {
	num_rodas = numRodas;
	delete [] rodas;
	rodas = new Roda[numRodas];
//rodas = this->rodas[numRodas];
//	this->rodas[numRodas];

}
