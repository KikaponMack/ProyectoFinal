// ProyectoFinal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include<vector>
#include<array>
#include<string>
#include <windows.h>
#define DEFAULT0
#define DEFAULTF
#define BLUE "\x1b[34m"
#define LIGHT_YELLOWF "\x1b[103m"

using namespace std;
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("color E5");
		system("cls");
		cout << "*********************************************************************************************************************\n";
		cout << "                                       |                                           |                                   ";
		cout << "                                       |      CONVERTIDOR DE BASES NUMERICAS         |                                   " << endl;
		cout << "                                       |                                           |                                   ";
		cout << "*********************************************************************************************************************\n";
		cout << "                                            \t1.- Binario-Decimal" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                                  \t2.- Decimal-Binario" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                            \t3.- Binario-Octal" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                                 \t4.- Binario-Hexadecimal" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                            \t5.- Texto-Binario" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                                 \t6.- Salir" << endl;
		cout << "                                                                                                               " << endl;
		cout << "                                            *************************************                                    \n";
		cout << "                                            *          Elige una opcion:        *                              " << endl;
		cout << "                                            *                                   *                              " << endl;
		cout << "                                            *************************************                                    \n";
		gotoxy(74, 18);
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "*********************************************************************************************************************\n";
			cout << "                                                                                                               " << endl;
			cout << "                                          Has elegido Binario a Decimal. \n                                            ";
			cout << "                                                                                                               " << endl;
			cout << "*********************************************************************************************************************\n";
			{
				int exp, digito;
				double binario, decimal;
				cout << "                                                                                                               " << endl;
				cout << "                                          Introduce el numero binario:                                                ";
				gotoxy(70, 7);
				cin >> binario;
				exp = 0;
				decimal = 0;
				while (((int)(binario / 10)) != 0)
				{
					digito = (int)binario % 10;
					decimal = decimal + digito * pow(2.0, exp);
					exp++;
					binario = (int)(binario / 10);
				}
				decimal = decimal + binario * pow(2.0, exp);
				cout << endl << "                                                 El Decimal es: " << decimal << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << "*********************************************************************************************************************\n";
			cout << "                                                                                                               " << endl;
			cout << "                                          Has elegido Decimal a Binario. \n                                            ";
			cout << "                                                                                                               " << endl;
			cout << "*********************************************************************************************************************\n";
			{
				int numero, dividendo, resto, divisor = 2;
				string binario = "";
				cout << "                            Ingrese el numero decimal a convertir a sistema binario: ";  cin >> numero;
				dividendo = numero;
				while (dividendo >= divisor) {
					resto = dividendo % 2;
					if (resto == 1)
						binario = "1" + binario;
					else
						binario = "0" + binario;
					dividendo = dividendo / divisor;
				}
				if (dividendo == 1)
					binario = "1" + binario;
				else
					binario = "0" + binario;
				cout << "                            El numero ingresado (" << numero << ") es equivalente al numero: " << binario << endl;
			}
			pausa();
			break;

		case '3':
			system("cls");
			cout << "*********************************************************************************************************************\n";
			cout << "                                                                                                               " << endl;
			cout << "                                            Has elegido Binario a Octal. \n                                            ";
			cout << "                                                                                                               " << endl;
			cout << "*********************************************************************************************************************\n";
			{
				int par; string resus, repu;
				vector <string> bina;
				vector <string> resul;
				cout << "                                                                                                               " << endl;
				cout << "                                  Cantidad de grupos de 3 digitos de tu codigo:                                         ";
				gotoxy(80, 7);
				cin >> par;
				for (int i = 0; i < par; i++) {
					cout << "                                                                                                               " << endl;
					cout << "                                           Ingresa 3 digitos de tu codigo:                                                  ";
					cin >> repu;
					bina.push_back(repu);
					if (bina[i] == "000") {
						resul.push_back("0");
					}
					if (bina[i] == "001") {
						resul.push_back("1");
					}
					if (bina[i] == "010") {
						resul.push_back("2");
					}
					if (bina[i] == "011") {
						resul.push_back("3");
					}

					if (bina[i] == "100") {
						resul.push_back("4");
					}
					if (bina[i] == "101") {
						resul.push_back("5");
					}
					if (bina[i] == "110") {
						resul.push_back("6");
					}

					if (bina[i] == "111") {
						resul.push_back("7");
					}
					resus = resus + resul[i];
				}
				cout << "                                                El codigo Octal es:" << resus << endl;
			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << "*********************************************************************************************************************\n";
			cout << "                                                                                                               " << endl;
			cout << "                                          Has elegido Binario a Hexadecimal. \n                                            ";
			cout << "                                                                                                               " << endl;
			cout << "*********************************************************************************************************************\n";
			{
				int par; string resus, repu;
				vector <string> bina;
				vector <string> resul;
				cout << "                                                                                                               " << endl;
				cout << "                                Cantidad de grupos de 4 digitos que tiene tu codigo: ";
				gotoxy(85, 7);
				cin >> par;
				for (int i = 0; i < par; i++) {
					cout << "                                                                                                               " << endl;
					cout << "                                           Ingresa 4 digitos de tu codigo: ";
					cin >> repu;
					bina.push_back(repu);
					if (bina[i] == "0000") {
						resul.push_back("0");
					}
					if (bina[i] == "0001") {
						resul.push_back("1");
					}
					if (bina[i] == "0010") {
						resul.push_back("2");
					}
					if (bina[i] == "0011") {
						resul.push_back("3");
					}
					if (bina[i] == "0100") {
						resul.push_back("4");
					}
					if (bina[i] == "0101") {
						resul.push_back("5");
					}
					if (bina[i] == "0110") {
						resul.push_back("6");
					}
					if (bina[i] == "0111") {
						resul.push_back("7");
					}
					if (bina[i] == "1000") {
						resul.push_back("8");
					}
					if (bina[i] == "1001") {
						resul.push_back("9");
					}
					if (bina[i] == "1010") {
						resul.push_back("A");
					}
					if (bina[i] == "1011") {
						resul.push_back("B");
					}
					if (bina[i] == "1100") {
						resul.push_back("C");
					}
					if (bina[i] == "1101") {
						resul.push_back("D");
					}
					if (bina[i] == "1110") {
						resul.push_back("E");
					}
					if (bina[i] == "1111") {
						resul.push_back("F");
					}
					resus = resus + resul[i];
				}
				cout << "                                                                                                               " << endl;
				cout << "                                              El codigo Hexadecimal es:" << resus << endl;
			}
			pausa();
			break;
		case '5':
			system("cls");
			cout << "*********************************************************************************************************************\n";
			cout << "                                                                                                               " << endl;
			cout << "                                          Has elegido Texto a Binario. \n                                              ";
			cout << "                                                                                                               " << endl;
			cout << "*********************************************************************************************************************\n";

			{
				char texto[300];
				int contador = 0, num, resul, cerosunos[20], i;
				int clrscr();
				cout << "                              Introduzca un texto para convertirlo a codigo binario:\n";
				cout << "                                                                                                               " << endl;
				gotoxy(53, 7);
				cin >> (texto);
				while (contador < strlen(texto))
				{
					i = 1;
					num = texto[contador];
					while (num > 0)
					{
						resul = num % 2;
						if (resul == 0)
						{
							cerosunos[i] = 0;
							i = i + 1;
						}
						else
						{
							cerosunos[i] = 1;
							i = i + 1;
							num = num - 1;
						}
						num = num / 2;
					}
					i = i - 1;
					while (i > 0)
					{
						printf("%i", cerosunos[i]);
						i = i - 1;
					}
					cout << "  ";
					contador = contador + 1;
				}
			}
			pausa();
			break;
		case '6':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}
