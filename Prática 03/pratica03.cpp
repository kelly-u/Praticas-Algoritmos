/*
 * pratica3.cpp
 *
 *  Created on: 19 de abr de 2022
 *      Author: GLEICE
 */

#include <iostream>
#include <cstring>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"
using namespace std;
using namespace funcoes;

int main() {

// int x = 5, y = 10, z = 30;
// char x = 'A', y = 'B', z = 'C';
	const char * x = "paralelepipedo", *y = "bola", *z = "sadfasdadssa";
	cout << "Antes: x = " << x << " y = " << y << endl;
	trocar(x, y);
	cout << "Depois : x = " << x << " y = " << y << endl;
	cout << "Minimo de \"casa\" e \"amore\": " << minimo("casa", "amore")
			<< endl;
	cout << "Maximo de \"casa\" e \"amore\": " << maximo("casa", "amore")
			<< endl;

	/*Arranjo<float> arr2(5);
	 arr2.set(4, 1.7);
	 arr2.set(7, 1.3);
	 arr2.set(8, 1.2);
	 arr2.exibir();*/

	try {
		Arranjo<int> arr(10);
		arr.set(4, 5);
		arr.set(7, 15);
		arr.set(8, 22);
		arr.exibir();

		Arranjo<float> arr2(5);
		arr2.set(3, 1.7);
		arr2.set(4, 1.3);
		//arr2.set(5, 1.3);
	    //arr2.set(8, 1.2);
		arr2.exibir();

	} catch (IndiceInvalido ii) {
		cerr << "Erro: " << ii.what() << endl;

	} catch (...) {
		cerr << "Erro inesperado! " << endl;
	}

Arranjo<Aluno> turma(3);
 turma.set(0, Aluno("Joao", "1234"));
 turma.set(1, Aluno("Maria", "5235"));
 turma.set(2, Aluno("Jose", "2412"));
 turma.exibir();

}
