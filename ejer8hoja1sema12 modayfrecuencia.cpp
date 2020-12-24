#include"stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
using namespace System;
void IngresarDatos(int *N, float *notas)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Ingrese la nota de la persona " << i + 1 << ": ";
		cin >> notas[i];
	}
}
void SalidaDatos(int *N, float *notas)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "La nota de la persona " << i + 1 << "es: " << notas[i] << endl;
	}
}


void Moda(int*n, float *notas)
{
	int contador1 = 0;
	int contador2 = 0;
	float moda;
	for (int i = 0; i < *n; i++)
	{
		contador1 = 0;
		for (int j = 0; j < *n; j++)
			if (notas[i] == notas[j])
				contador1++;
		if (contador1 > contador2)
		{
			contador2 = contador1;
			moda = notas[i];
		}
	}
	cout << "la nota  que mas se repite es " << moda << " y se repite " << contador2 << " veces";
}


int main()
{
	int N;
	cout << "Ingrese el numero de alumnos: ";
	cin >> N;
	float *notas;
	notas = new float[N];
	IngresarDatos(&N, notas);
	SalidaDatos(&N, notas);
	Moda(&N, notas);
	delete [] notas;
	_getch();
}