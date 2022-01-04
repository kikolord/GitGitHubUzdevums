#include <iostream>
#include "Name.h"
#include "Andrejs.h"

using namespace std;

Andrejs::Andrejs(string n)
{
	name=n;
}

void Andrejs::setName(string n)
{
	name=n;
}

void Andrejs::Print() const
{
	cout << name << endl;
}

