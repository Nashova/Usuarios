/*
 * LeerArchivo.cpp
 *
 *  Created on: 08/08/2012
 *      Author: Nashova
 */
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream ar("Archivo.txt");
	char linea [50];
	while (!ar.eof()) {
		ar.getline(linea, 50);
		cout << linea << endl;
	}
	//system("PAUSE");
	return EXIT_SUCCESS;
}
