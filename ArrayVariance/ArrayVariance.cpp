/*
 * Author: Anderson Taylor
 * Date: 9/12/18
 * File: ArrayVariance.cpp
 * Description: Reads in values from a file then calculates the variance.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

double computeVariance(double*, int);
/*
 * Description:
 *   Calculates and returns the variance of the values in the array.
 *
 * Inputs:
 *   double * ary
 *     A pointer to an array consisting of the values from the file.
 *	 int num
 *	   The number of elements in the array.
 *
 * Return:
 *   double - The variance of the values in the array.
 */

int main()
{
	string file;
	double * ary;
	ifstream iFile;
	int size;
	double var;

	//Promp user for file name and how many elements to read(size of the array).
	cout << "Name of file: ";
	cin >> file;

	iFile.open(file.c_str());

	cout << "Size of array: ";
	cin >> size;

	//Create new dynamic array of doubles.
	ary = new double[size];

	//Read elements into the array.
	for (int i = 0; i < size; i++) 
	{
		iFile >> ary[i];
	}
	
	cout << computeVariance(ary, size);

	iFile.close();
	delete[] ary;

	return 0;
}

double computeVariance(double* ary, int num)
{
	double avg = 0;
	double varAvg = 0;

	//Find the average of all the values in the array.
	for (int i = 0; i < num; i++)
	{
		avg += *(ary + i);
	}

	avg /= num;

	//Calculate the variance.
	for (int i = 0; i < num; i++)
	{
		varAvg += pow(((*(ary + i)) - avg),2);
	}

	varAvg /= num;

	return varAvg;
}