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


/**************************************************************************/

//Veiculo
class Veiculo {
protected:
	string nome;

public:
	Veiculo(const char * n){
		this->nome = n;
		cout << "Veículo " << nome << " criado!" << endl;
	}

	virtual ~Veiculo(){
		cout << "Veículo " << nome << " destruído!" << endl;
	}
	virtual void mover() = 0;

};

/**************************************************************************/

//Terrestre
class Terrestre : public Veiculo {

private:
	int cap_pass; //Número máximo de passageiros

protected:
	Terrestre():Veiculo("te"){
		this->cap_pass = 5;
	}

public:
	Terrestre(const char * n):Veiculo(n){
		this->cap_pass = 5;
	}

	virtual ~Terrestre(){
		cout << "Veículo terrestre " << nome << " destruído!" << endl;
	}

	int getCapPass();
	void setCapPass(int capPass);
	void mover();
};

/**************************************************************************/

// Aquático
class Aquatico : public Veiculo {

private:
	float carga_max; //Carga máxima em toneladas

protected:
	Aquatico():Veiculo("aq"){
		this->carga_max = 10;
	}

public:
	Aquatico(const char * n):Veiculo(n){
		this->carga_max = 10;
	}

	virtual ~Aquatico(){
		cout << "Veículo aquático " << nome << " destruído!" << endl;
	}

	float getCargaMax();
	void setCargaMax(float cargaMax);
	void mover();
};

/**************************************************************************/

// Aéreo
class Aereo : public Veiculo {

private:
	float vel_max; //Velocidade máxima em km/h

public:
	Aereo(const char * n):Veiculo(n){
		vel_max = 100;
	}

	virtual ~Aereo(){
		cout << "Veículo aéreo " << nome << " destruído!" << endl;
	}

	float getVelMax();
	void setVelMax(float velMax);
	void mover();
};

/**************************************************************************/

//Anfíbio
class Anfibio : public virtual Terrestre, public virtual Aquatico {

	Anfibio(const char * nome) : Veiculo(nome), Terrestre(), Aquatico() {

		void Terrestre::mover();
		void Aquatico::mover();

	}

};



#endif /* VEICULO_H_ */
