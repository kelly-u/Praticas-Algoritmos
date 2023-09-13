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
//defini��es de classes usadas na pr�tica.

class Veiculo {
protected:
	string nome;

public:
	Veiculo(const char * p) {
		this->nome = p;
		cout << "Objeto ve�culo " << nome << " constru�do!" << endl;
	}
	virtual ~Veiculo() {
		cout << "Objeto veiculo " << nome << " destru�do!" << endl;
	}

	virtual void mover() = 0;

};

/*********************************************************************/

class Terrestre: public virtual Veiculo {
private:
	int cap_pass; //N�mero m�ximo de passageiros.

protected:
	Terrestre() :
			Veiculo("carro") {
		this->cap_pass = 5;
	}

public:
	Terrestre(const char * p) :
			Veiculo(p) {
		this->cap_pass = 5;
		cout << "Objeto terrestre " << nome << " constru�do!" << endl;
	}

	virtual ~Terrestre() {
		cout << "Objeto terrestre " << nome << " destru�do!" << endl;
	}

	int getCapPass();
	void setCapPass(int capPass);

	void mover();

};

/*********************************************************************/

class Aquatico: public virtual Veiculo {
private:
	float carga_max; //Carga m�xima em toneladas.

protected:
	Aquatico() :
			Veiculo("lancha") {
		this->carga_max = 10;
	}

public:
	Aquatico(const char * p) :
			Veiculo(p) {
		this->carga_max = 10;
		cout << "Objeto aqu�tico " << nome << " constru�do!" << endl;
	}
	virtual ~Aquatico() {
		cout << "Objeto aquatico " << nome << " destru�do!" << endl;
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
		cout << "Objeto a�reo " << nome << " constru�do!" << endl;
	}
	virtual ~Aereo() {
		cout << "Objeto aereo " << nome << " destru�do!" << endl;
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

		cout << "Objeto anf�bio " << nome << " constru�do!" << endl;

	}

	void mover() {
		Terrestre::mover();
		Aquatico::mover();
	}

};

#endif /* VEICULO_H_ */
