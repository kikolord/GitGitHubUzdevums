#include <iostream>
#include "Name.h"
#include "Edijs.h"

using namespace std;

Edijs::Edijs(string n)
{
	name=n;
}

void Edijs::setName(string n)
{
	name=n;
}

void Edijs::Print() const
{
	cout << name << endl;
}

