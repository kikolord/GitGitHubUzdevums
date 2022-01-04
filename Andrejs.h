#include <iostream>
#include "Name.h"
using namespace std;

class Edijs: public Name
{
	public:
		Edijs(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
