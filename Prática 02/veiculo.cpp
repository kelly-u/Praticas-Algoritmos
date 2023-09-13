/*
 * veiculo.cpp
 *
 *  Created on: 12 de abr de 2022
 *      Author: GLEICE
 */

//implementações de métodos dessas classes.
#include "veiculo.h"
using namespace std;

/*********************************************************************/

//TERRESTRE:
int Terrestre::getCapPass() {
	return cap_pass;
}

void Terrestre::setCapPass(int capPass) {
	cap_pass = capPass;
}

/*********************************************************************/

//AQUÁTICO:
float Aquatico::getCargaMax() {
	return carga_max;
}

void Aquatico::setCargaMax(float cargaMax) {
	carga_max = cargaMax;
}

/*********************************************************************/

//AÉREO:
float Aereo::getVelMax() {
	return vel_max;
}

void Aereo::setVelMax(float velMax) {
	vel_max = velMax;
}

/*********************************************************************/

//MOVER VEICULO:
void Veiculo::mover(){
	cout << "Veiculo " << nome << " moveu" << endl;
}

/*********************************************************************/

//MOVER VEICULO TERRESTRE:
void Terrestre::mover(){
	cout << "Veiculo terrestre " << nome << " moveu" << endl;
}

/*********************************************************************/

//MOVER VEICULO AQUATICO:
void Aquatico::mover(){
	cout << "Veiculo aquatico " << nome << " moveu" << endl;
}

/*********************************************************************/

//MOVER VEICULO AEREO:
void Aereo::mover(){
	cout << "Veiculo aereo " << nome << " moveu" << endl;
}
