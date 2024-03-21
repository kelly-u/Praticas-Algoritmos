/*
 * veiculo.cpp
 *
 *  Created on: 21 de mar. de 2024
 *      Author: ALUNO
 */

#include "veiculo.h"

// Onde vai ficar a implementação do esqueleto do projeto

//Terrestre
int Terrestre::getCapPass() {
	return cap_pass;
}

void Terrestre::setCapPass(int capPass) {
	cap_pass = capPass;
}


//Aquático
float Aquatico::getCargaMax() {
	return carga_max;
}

void Aquatico::setCargaMax(float cargaMax) {
	carga_max = cargaMax;
}


//Aereo
float Aereo::getVelMax() {
	return vel_max;
}

void Aereo::setVelMax(float velMax) {
	vel_max = velMax;
}
