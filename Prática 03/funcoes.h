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

//M�XIMO GERAL
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

//M�XIMO PARA CHAR *
const char * maximo(const char * a, const char * b) {
	const char *max;
	if (strcmp(a, b) > 0) {
		max = b;
	} else {
		max = a;
	}
	return max;
}

//M�NIMO GERAL
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

//M�NIMO PARA CHAR *
const char * minimo(const char * a, const char * b) {
	const char *min;
	if (strcmp(a, b) < 0) {
		min = b;
	} else {
		min = a;
	}
	return min;
}

/*********************************************************************************/
}
#endif /* FUNCOES_H_ */
