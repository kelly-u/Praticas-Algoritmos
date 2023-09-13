/*
 * veiculo.h
 *
 *  Created on: 11 de abr de 2022
 *      Author: ALUNO
 */

#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>
using namespace std;

class Roda {

public:
	Roda() {
		cout << "Novo objeto roda criado!" << endl;
	}
	~Roda() {
		cout << "Objeto roda destruido!" << endl;
	}
};

class Veiculo {
private:
	string nome;
	int num_rodas;
	Roda * rodas;

public:
	Veiculo(const char * parametro) {
		this->nome = string(parametro);
		cout << "Novo objeto " << nome << " criado!" << endl;
		this-> num_rodas = 0;
		this->rodas = NULL;
	}
	~Veiculo() {
		cout << "Objeto " << nome << " destruido!" << endl;
		delete [] rodas;
	}

	int getNumRodas();

	void setNumRodas(int numRodas);

};

#endif /* VEICULO_H_ */
