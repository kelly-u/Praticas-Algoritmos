/*
 * pratica01.cpp
 *
 *  Created on: 16 de mar. de 2024
 *      Author: gleic
 */

#include "veiculo.h"

// Principal onde só vai ficar a Main

int main() {
	cout << "Primeira aplicação C++" << endl;

	/*{
	 Veiculo veiculo1("v1");
	 {
	 Veiculo veiculo2("v2");
	 {
	 Veiculo veiculo3("v3");
	 }
	 }
	 }*/


		Veiculo *obj1 = new Veiculo("v1");
		{
			obj1->setNumRodas(3);
			cout << "Quantidade de rodas: " << obj1->getNumRodas() << endl;


			Veiculo *obj2 = new Veiculo("v2");
			{
				obj2->setNumRodas(1);
				cout << "Quantidade de rodas: " << obj2->getNumRodas() << endl;


				Veiculo *obj3 = new Veiculo("v3");
				{
					obj3->setNumRodas(11);
					cout << "Quantidade de rodas: " << obj3->getNumRodas() << endl;

					delete obj3;
				}

				delete obj2;
			}

			delete obj1;
		}

	}

