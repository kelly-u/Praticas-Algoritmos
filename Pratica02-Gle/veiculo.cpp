/*
 * veiculo.cpp
 *
 *  Created on: 21 de mar. de 2024
 *      Author: ALUNO
 */

#include "veiculo.h"

// Onde vai ficar a implementação do esqueleto do projeto


/**************************************************************************/

//Veículo
/*void Veiculo::mover(){
	cout << "Veículo " << nome << " moveu" <<endl;
}*/

/**************************************************************************/

// Terrestre
int Terrestre::getCapPass() {
	return cap_pass;
}

void Terrestre::setCapPass(int capPass) {
	cap_pass = capPass;
}

void Terrestre::mover(){
	cout << "Veículo terrestre " << nome << " moveu" <<endl;
}

/**************************************************************************/

// Aquático
float Aquatico::getCargaMax() {
	return carga_max;
}

void Aquatico::setCargaMax(float cargaMax) {
	carga_max = cargaMax;
}

void Aquatico::mover(){
	cout << "Veículo aquático " << nome << " moveu" <<endl;
}

/**************************************************************************/

// Aéreo
float Aereo::getVelMax() {
	return vel_max;
}

void Aereo::setVelMax(float velMax) {
	vel_max = velMax;
}

void Aereo::mover(){
	cout << "Veículo aéreo " << nome << " moveu" <<endl;
}
