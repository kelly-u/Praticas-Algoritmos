/*
 * veiculo.cpp
 *
 *  Created on: 16 de mar. de 2024
 *      Author: gleic
 */
#include "veiculo.h"

// Onde vai ficar a implementação do esqueleto do projeto

int Veiculo::getNumRodas() {
	return num_rodas;
}
void Veiculo::setNumRodas(int numRodas) {
	num_rodas = numRodas;
	rodas = new Roda[numRodas];
	delete [] rodas;
}

