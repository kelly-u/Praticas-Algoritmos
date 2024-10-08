/*
 * ordenacao.cpp
 *
 *  Created on: 20 de out de 2017
 *      Author: ramide
 */

#include <iostream>
#include <stdlib.h>
#include <chrono>

using namespace std;

// Troca dois valores
// Pode ser usada nas funções de ordenação
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

// Faz uma cópia de um array em outro novo
int* clone(int *array, int size) {
	int *copy = new int[size];
	for (int i = 0; i < size; i++) {
		copy[i] = array[i];
	}
	return copy;
}

// NO-OP Sort: não mexer
void noopsort(int *array, int size) {
	// no-op
}

void bubblesort(int *array, int size) {

	int ultimo_nao_ordenado = size, continua;

	do {
		continua = 0;
		for (int i = 0; i < ultimo_nao_ordenado - 1; i++) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				continua = i;
			}
		}
		ultimo_nao_ordenado--;
	} while (continua != 0);

}

void selectionsort(int *array, int size) {

	int ultimo_indice = size -1,
		min;
	for (int i = 0; i <= ultimo_indice; i++) {
		min = i;
		for (int j = i + 1; j <= ultimo_indice; j++) {
			if (array[min] > array[j]) {
				min = j;
			}
		}
		if (i != min) {
			swap(array[i], array[min]);
		}
	}
}

void insertionsort(int *array, int size) {
	//TO DO
}

// Faz o merge dos subarrays em aux para array, isto é, array[...] = aux[...]
void merge(int *array, int *aux, int start, int mid, int finish) {

	int esquerda = start,
		direita = mid,
		indiceArray = start;

	while(esquerda <= mid-1 && direita <= finish) {
		if(aux[esquerda] < aux[direita]){
			array[indiceArray] = aux[esquerda];
			esquerda ++;
		}
		else{
			array[indiceArray] = aux[direita];
			direita ++;
		}
		indiceArray ++;
	}

	while(esquerda <= mid - 1){
		array[indiceArray] = aux[esquerda];
		esquerda ++;
		indiceArray ++;
	}

	while(direita <= finish){
		array[indiceArray] = aux[direita];
		direita ++;
		indiceArray ++;
	}
}

// Array: array que vai conter o resultado ordenado
// Aux: array auxiliar usado para ordenar as duas metades, esquerda e direita
// Repare que na chamada recursiva de mergesorte, array e aux se alternam
// Isto é, uma hora um é o principal e o outro é o auxiliar, depois invertem
void mergesort(int *array, int *aux, int start, int finish) {
	if (start >= finish)
		return;

	int mid = (start + finish) / 2;

	mergesort(aux, array, start, mid);
	mergesort(aux, array, mid + 1, finish);

	merge(array, aux, start, mid + 1, finish);
}

// Função chamada inicialmente;
// Chama a função mergesorte() acima com os limites start e finish, e o clone do array (aux).
void mergesort(int *array, int size) {
	int *aux = clone(array, size);
	mergesort(array, aux, 0, size - 1);
	delete[] aux;
}

// Partição do QuickSort
int partition(int *array, int start, int finish) {

	int pivo = array[finish],
		esquerda = start,
		direita = finish,
		aux;

	while(esquerda < direita){
		while(direita >= 0 && array[direita] > pivo){
			direita --;
		}
		while (esquerda <= finish && array[esquerda] <= pivo){
			esquerda ++;
		}
		if(esquerda < direita){
			aux = array[esquerda];
			array[esquerda] = array[direita];
			array[direita] = aux;
		}
	}

	array[start] = array[direita];
	array[direita] = pivo;

	return direita;
}

void quicksort(int *array, int start, int finish) {
	if (finish <= start)
		return;
	int pivot = partition(array, start, finish);
	quicksort(array, start, pivot - 1);
	quicksort(array, pivot + 1, finish);
}

// Semelhante ao que ocorre com o MergeSort.
void quicksort(int *array, int size) {
	quicksort(array, 0, size - 1);
}

// Funções Utilitárias

// Valida um array (isto é, se está ordenado ou não)
int validate(int *data, int size) {
	for (int i = 0; i < size - 1; i++) {
		if (data[i] > data[i + 1])
			return 0;
	}
	return 1;
}

// Exibe um array na tela
void print(int *data, int size) {
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}

// Testa um algoritmo passado como parâmetro.
void test(int *array, int size, const char *name, void function(int*, int),
		int printFlag) {
	int *copy = clone(array, size);
	auto start = std::chrono::high_resolution_clock::now();

	function(copy, size);

	auto finish = std::chrono::high_resolution_clock::now();
	long elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(
			finish - start).count() / 1000;

	int valid = validate(copy, size);
	cout << name << ": " << (valid ? "ok" : "erro") << " (tempo[us] = "
			<< elapsed << ") ";

	if (printFlag)
		print(copy, size);
	else
		cout << endl;

	delete[] copy;
}

int main() {
	int size = 10;
	int print = 1;

	int *array = new int[size];

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (size * 2);
	}

	test(array, size, "NoOpSort     ", noopsort, print);
	test(array, size, "BubbleSort   ", bubblesort, print);
	test(array, size, "SelectionSort", selectionsort, print);
	test(array, size, "InsertionSort", insertionsort, print);
	test(array, size, "MergeSort    ", mergesort, print);
	test(array, size, "QuickSort    ", quicksort, print);

	delete[] array;
}

