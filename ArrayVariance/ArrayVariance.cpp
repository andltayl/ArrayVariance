// ArrayVariance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	string file;
	double * ary;
	ifstream iFile;
	int size;


	cout << "Name of file: ";
	cin >> file;

	iFile.open(file.c_str());

	cout << "Size of array: ";
	cin >> size;
	ary = new double[size];

	for (int i = 0; i < size; i++) {
		iFile >> ary[i];
	}

	for (int i = 0; i < size; i++) {
		cout << ary[i] << endl;
	}

	//function returns double and takes ary*

	terd(ary*, int) {
		(ary+int)*
			ary+int;
	}

	iFile.close();
	delete[] ary;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
