/*
 * aluno.h
 *
 *  Created on: 4 de mai de 2022
 *      Author: ALUNO
 */

#include <string>
#include <vector>
#include "arranjo.h"

using namespace std;

class Aluno {
private:
	string nome;
	string mat;
public:
	Aluno() {
	}
	Aluno(const char * nome, const char * mat) :
			nome(nome), mat(mat) {
	}
	friend class Arranjo<Aluno> ;

};

template<> void Arranjo<Aluno>::set(int idx, const Aluno & aluno) {
	this->items[idx].nome = aluno.nome;
	this->items[idx].mat = aluno.mat;
}


template<> void Arranjo<Aluno>::exibir() {
	for (int i = 0; i < tamanho; i++) {
		cout << i << ": " << items[i].mat << " = " << items[i].nome << endl;
	}

}
