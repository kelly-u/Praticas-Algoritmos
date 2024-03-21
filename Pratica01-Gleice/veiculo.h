/*
 * veiculo.h
 *
 *  Created on: 16 de mar. de 2024
 *      Author: gleic
 */

#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>
using namespace std;

// Onde vai ficar o esqueleto do projeto


class Roda{

public:
	Roda(){
		cout << "Roda criada com sucesso" << endl;
	}

	~Roda(){
		cout << "Roda destruída com sucesso!" << endl;
	}
};


class Veiculo {
private:
	string nome;
	int num_rodas;
	Roda *rodas;

public:
	Veiculo(const char *param) {
		this->nome = string(param);
		this->num_rodas = 0;
		this->rodas = NULL;
		cout << "Objeto " << nome << " criado com sucesso!" << endl;
	}

	~Veiculo() {
		delete [] rodas;
		cout << "Objeto " << nome << " destruído com sucesso!" << endl;
	}

	int getNumRodas();
	void setNumRodas(int numRodas);

};

#endif /* VEICULO_H_ */
