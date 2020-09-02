#include "pch.h"
//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>

using namespace System;
using namespace std;

int Suma_con_Recursividad(int, int);
int Suma_Iterativa(int, int);
int Convertir_a_Decimal_Iterativa(int, int, int);

int main(/*array<System::String ^> ^args*/)
{
	int menu;
	cout << "Menu" << endl;
	cout << "Ingrese numero de ejercicio que desea realizar" << endl;
	cout << "Ejercicio 1: Calcular la multiplicacion de dos numeros utilizando sumas " << endl;
	cout << "Ejercicio 2: Comprobacion de palabras palindromas " << endl;
	cout << "Ejercicio 3: Determinante de una Matriz" << endl;
	cout << "Ejercicio 4: Conversion de base m a base n " << endl;
	cin >> menu;
	Console::Clear();
	if (menu == 1)
	{
		cout << "Ejercicio 1: Calcular la multiplicación de dos números utilizando sumas" << endl;
		cout << "Ingrese 1 para realizarlo de forma recursiva o 2 para realizarlo de forma iterativa" << endl;
		int op1;
		cin >> op1;
		Console::Clear();
		if (op1 == 1)
		{
			cout << "Usted ha seleccionado realizarlo de forma recursiva" << endl;
			cout << "Calcular la multiplicacion de dos numeros utilizando sumas" << endl;
			cout << "Ingrece primer valor" << endl;
			int num1;
			cin >> num1;
			cout << "Ingrese segundo valor" << endl;
			int num2;
			cin >> num2;
			int result = Suma_con_Recursividad(num1, num2);
			cout << "El resultado es: " << result << endl;


		}
		else if (op1 == 2)
		{
			cout << "Usted ha seleccionado realizarlo de forma iterativa" << endl;
			cout << "Calcular la multiplicacion de dos numeros utilizando sumas" << endl;
			cout << "Ingrece primer valor" << endl;
			int num1;
			cin >> num1;
			cout << "Ingrese segundo valor" << endl;
			int num2;
			cin >> num2;
			int result = Suma_Iterativa(num1, num2);
			cout << "El resultado es: " << result << endl;

		}
		else
		{
			cout << "ERROR, numero ingresado fuera de los parametros" << endl;
		}
	}
	else if (menu == 2)
	{
		cout << "Comprobacion de palabras palindromas " << endl;
		cout << "Ingrese 1 para realizarlo de forma recursiva o 2 para realizarlo de forma iterativa" << endl;
		int op2;
		cin >> op2;
		Console::Clear();
		if (op2 == 1)
		{
			cout << "Usted ha seleccionado realizarlo de forma recursiva" << endl;
			cout << "ingrese la palabra" << endl;
			
		}
		else if (op2 == 2)
		{
			cout << "Usted ha seleccionado realizarlo de forma iterativa" << endl;

		}
		else
		{
			cout << "ERROR, numero ingresado fuera de los parametros" << endl;
		}
	}
	else if (menu == 3)
	{
		cout << "Determinante de una Matriz" << endl;
		cout << "Ingrese 1 para realizarlo de forma recursiva o 2 para realizarlo de forma iterativa" << endl;
		int op3;
		cin >> op3;
		Console::Clear();
		if (op3 == 1)
		{
			cout << "Usted ha seleccionado realizarlo de forma recursiva" << endl;

		}
		else if (op3 == 2)
		{
			cout << "Usted ha seleccionado realizarlo de forma iterativa" << endl;

		}
		else
		{
			cout << "ERROR, numero ingresado fuera de los parametros" << endl;
		}
	}
	else if (menu == 4)
	{
		cout << "Conversion de base m a base n" << endl;
		cout << "Ingrese 1 para realizarlo de forma recursiva o 2 para realizarlo de forma iterativa" << endl;
		int op4;
		cin >> op4;
		Console::Clear();
		if (op4 == 1)
		{
			int dato, base1, base2, decimal, tamaño;
			cout << "Usted ha seleccionado realizarlo de forma recursiva" << endl;
			cout << "Ingrese dato para convertir" << endl;
			cin >> dato;
			cout << "Ingrese base del dato ingresado" << endl;
			cin >> base1;
			cout << "Ingrese base a la que desea convertir el dato" << endl;
			cin >> base2;
			cout << " " << tamaño << endl;
			int dec = Convertir_a_Decimal_Iterativa(dato, base1, tamaño);
			cout << "El resultado es: " << decimal;
			
		}
		else if (op4 == 2)
		{
			int dato, base1, base2, decimal, tamaño;
			cout << "Usted ha seleccionado realizarlo de forma iterativa" << endl;
			cout << "Ingrese dato para convertir" << endl;
			cin >> dato;
			cout << "Ingrese base del dato ingresado" << endl;
			cin >> base1;
			cout << "Ingrese base a la que desea convertir el dato" << endl;
			cin >> base2;
			cout << " " << tamaño << endl;
			int dec = Convertir_a_Decimal_Iterativa(dato, base1, tamaño);
			cout << "El resultado es: " << decimal;

		}
		else
		{
			cout << "ERROR, numero ingresado fuera de los parametros" << endl;
		}
	}
	else
	{
		cout << "ERROR, numero ingresado fuera de los parametros" << endl;
	}


    return 0;
}

int Suma_con_Recursividad(int num1, int num2) {
	if (num1 == 0)
	{
		return 0;
	}
	else
	{
		return num2 + Suma_con_Recursividad(num1 - 1, num2);
	}
}

int Suma_Iterativa(int num1, int num2) {
	int result = 0;
	for (int i = 0; i < num2; i++)
	{
		result = result + num1;
	}
	return result;
}

int Convertir_a_Decimal_Iterativa(int dato, int base, int size){
	int val = 0;

	for (int i = size - 1 ; i >= 0; i--)
	{
		val = val + dato[1] * (base ^ 1);
		size--;
	}
}