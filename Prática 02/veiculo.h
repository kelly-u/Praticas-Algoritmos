/*
 * veiculo.h
 *
 *  Created on: 12 de abr de 2022
 *      Author: GLEICE
 */

#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>
using namespace std;
//definições de classes usadas na prática.

class Veiculo {
protected:
	string nome;

public:
	Veiculo(const char * p) {
		this->nome = p;
		cout << "Objeto veículo " << nome << " construído!" << endl;
	}
	virtual ~Veiculo() {
		cout << "Objeto veiculo " << nome << " destruído!" << endl;
	}

	virtual void mover() = 0;

};

/*********************************************************************/

class Terrestre: public virtual Veiculo {
private:
	int cap_pass; //Número máximo de passageiros.

protected:
	Terrestre() :
			Veiculo("carro") {
		this->cap_pass = 5;
	}

public:
	Terrestre(const char * p) :
			Veiculo(p) {
		this->cap_pass = 5;
		cout << "Objeto terrestre " << nome << " construído!" << endl;
	}

	virtual ~Terrestre() {
		cout << "Objeto terrestre " << nome << " destruído!" << endl;
	}

	int getCapPass();
	void setCapPass(int capPass);

	void mover();

};

/*********************************************************************/

class Aquatico: public virtual Veiculo {
private:
	float carga_max; //Carga máxima em toneladas.

protected:
	Aquatico() :
			Veiculo("lancha") {
		this->carga_max = 10;
	}

public:
	Aquatico(const char * p) :
			Veiculo(p) {
		this->carga_max = 10;
		cout << "Objeto aquático " << nome << " construído!" << endl;
	}
	virtual ~Aquatico() {
		cout << "Objeto aquatico " << nome << " destruído!" << endl;
	}

	float getCargaMax();
	void setCargaMax(float cargaMax);

	void mover();

};

/*********************************************************************/

class Aereo: public Veiculo {
private:
	float vel_max;

public:
	Aereo(const char * p) :
			Veiculo(p) {
		this->vel_max = 100;
		cout << "Objeto aéreo " << nome << " construído!" << endl;
	}
	virtual ~Aereo() {
		cout << "Objeto aereo " << nome << " destruído!" << endl;
	}

	float getVelMax();
	void setVelMax(float velMax);

	void mover();

};

/*********************************************************************/

class Anfibio: public Terrestre, public Aquatico {

public:
	Anfibio(const char * nome) :
			Veiculo(nome), Terrestre(), Aquatico() {

		cout << "Objeto anfíbio " << nome << " construído!" << endl;

	}

	void mover() {
		Terrestre::mover();
		Aquatico::mover();
	}

};

#endif /* VEICULO_H_ */
