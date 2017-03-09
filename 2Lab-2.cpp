#include "stdafx.h"
#include <tchar.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Cat
{
	char por[64];
public:
	double eat;
	Cat()
	{
		eat = por[0] = 0;
	}
	void set(char PORODKA[], double r)
	{
		strcpy_s(por, PORODKA);
		eat = r;
	}

	void print()
	{
		cout << "\nPoroda: " << por << " Eat per month (kg)=" << eat;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int n;
	cout << "n="; cin >> n;
	double SumEat = 0;
	char P[64]; double R;
	Cat *pCat;
	pCat = new Cat[n];
	for (unsigned int i = 0; i<n; i++)
	{
		cout << "Object N=" << (i + 1) << ":\n" << "Poroda: ";
		cin >> P;
		cout << "Eat per month (kg)="; cin >> R;
		pCat[i].set(P, R);
	}
	for (unsigned int i = 0; i<n; ++i) pCat[i].print();
	for (unsigned int i = 0; i<n; ++i) SumEat += pCat[i].eat;

	cout << "\neat together=" << SumEat << endl;
	delete pCat;
	system("pause");
	return 0;
}
