/*
 * veiculo.h
 *
 *  Created on: 21 de mar. de 2024
 *      Author: ALUNO
 */

#ifndef VEICULO_H_
#define VEICULO_H_

// Onde vai ficar o esqueleto do projeto

#include <iostream>
using namespace std;


//Use o construtor para exibir no terminal que o objeto foi criado, dizendo o nome do
//objeto. Faça as modificações necessárias em veiculo.h para isso

class Veiculo {
protected:
	string nome;

public:
	Veiculo(const char * n){
		this->nome = n;
		cout << "Objeto " << nome << " criado!" << endl;
	}

};


class Terrestre : public Veiculo {

private:
	int cap_pass; //Número máximo de passageiros

public:
	Terrestre(const char * n):Veiculo(n){
		this->cap_pass = 5;
	}

	int getCapPass();
	void setCapPass(int capPass);
};


class Aquatico : public Veiculo {

private:
	float carga_max; //Carga máxima em toneladas

public:
	Aquatico(const char * n):Veiculo(n){
		this->carga_max = 10;
	}

	float getCargaMax();
	void setCargaMax(float cargaMax);
};


class Aereo : public Veiculo {

private:
	float vel_max; //Velocidade máxima em km/h

public:
	Aereo(const char * n):Veiculo(n){
		vel_max = 100;
	}

	float getVelMax();
	void setVelMax(float velMax);
};

#endif /* VEICULO_H_ */
