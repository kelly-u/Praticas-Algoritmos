/*
 * pratica02.cpp
 *
 *  Created on: 12 de abr de 2022
 *      Author: GLEICE
 */

#include <iostream>
#include "veiculo.h"
using namespace std;

int main(){

//	Veiculo v1("v1");
	Terrestre t1("t1");
	Aquatico aq1("aq1");
	Aereo ar1("ar1");

  /*Veiculo * terr, * aqua, * aereo;
	terr = new Terrestre("VT1");
	terr->setCapPass(45);

	aqua = new Aquatico("VQ1");
	aqua->setCargaMax(12.5);

	aereo = new Aereo("VA1");
	aereo->setVelMax(1040.5);
*/
	Veiculo * terr = new Terrestre("VT1");
	dynamic_cast<Terrestre *>(terr)->setCapPass(45);
//	((Terrestre *)terr)->setCapPass(45);

	Veiculo * aqua = new Aquatico("VQ1");
	dynamic_cast<Aquatico *>(aqua)->setCargaMax(12.5);
//	((Aquatico *)aqua)->setCargaMax(12.5);

	Veiculo * aereo = new Aereo("VA1");
	((Aereo *)aereo)->setVelMax(1040.5);

	Veiculo * anfi = new Anfibio("VANF1");
	dynamic_cast<Anfibio *>(anfi)->mover();

	terr->mover();
	aqua->mover();
	aereo->mover();
	anfi->mover();

	delete terr;
	delete aqua;
	delete aereo;
	delete anfi;

}
