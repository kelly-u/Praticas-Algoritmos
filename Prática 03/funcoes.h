/*
 * funcoes.h
 *
 *  Created on: 19 de abr de 2022
 *      Author: GLEICE
 */

#ifndef FUNCOES_H_
#define FUNCOES_H_

#include <cstring>

namespace funcoes {

//TROCAR
/*********************************************************************************/
template<class T>
void trocar(T & a, T & b) {
	/* troca valores de a e b entre si */
	T c = a;
	a = b;
	b = c;
}

//MÁXIMO GERAL
/*********************************************************************************/
template<class T>
T maximo(T a, T b) {
	/* retorna maior entre a e b */
	T max = a;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	return max;
}

//MÁXIMO PARA CHAR *
template<>
char * maximo(char * a, char * b) {
	char *max;
	if (strcmp(a, b) > 0) {
		max = b;
	} else {
		max = a;
	}
	return max;
}

//MÍNIMO GERAL
/*********************************************************************************/
template<class T>
T minimo(T a, T b) {
	/* retorna menor entre a e b */
	T min = a;
	if (a < b) {
		min = a;
	} else {
		min = b;
	}
	return min;
}

//MÍNIMO PARA CHAR *
template<>
char * minimo(char * a, char * b) {
	char *min;
	if (strcmp(a, b) < 0) {
		min = b;
	} else {
		min = a;
	}
	return min;
}

char * maximo(char * a, char * b) {
	char *max = a;
	if (strcmp(a, b) > 0) {
		max = a;
	} else {
		max = b;
	}
	return max;
}

/*********************************************************************************/
}
#endif /* FUNCOES_H_ */
