/*
 * pratica01.cpp
 *
 *  Created on: 11 de abr de 2022
 *      Author: ALUNO
 */
#include <iostream>
#include "veiculo.h"
using namespace std;


int main() {

	cout << "Primeira aplicacao C++" << endl;

	/*Veiculo veiculo1("v1");
	{
		Veiculo veiculo2("v2");
		{
			Veiculo veiculo3("v3");
		}
	}*/

	Veiculo * obj1 = new Veiculo("v1");
	{
		obj1->setNumRodas(3);
		obj1->setNumRodas(3);
		cout << "Quant. de rodas: " << obj1->getNumRodas() << endl;

/*		Veiculo * obj2 = new Veiculo("v2");
		{
			obj2->setNumRodas(4);
			cout << "Quant. de rodas: " << obj2->getNumRodas() << endl;

			Veiculo * obj3 = new Veiculo("v3");
				obj3->setNumRodas(6);
				cout << "Quant. de rodas: " << obj3->getNumRodas() << endl;

				delete obj3;
				delete obj2;
		}*/
		delete obj1;
	}
	return 0;
}
