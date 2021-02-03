#include<iostream>
#include"CarbonFootprint.h"
#include"Electrcity.h"
#include"NaturalGas.h"
#include"Vehicle.h"
#include "Copier.h"
using namespace std;
void Dislay(CarbonFootprint* obj) {
	cout << obj->getCarbonFootprint() << endl;
}
int main()
{
	/*CarbonFootprint* obj;

	Electrcity elec(8);
	obj = &elec;
	Dislay(obj);

	NaturalGas gas(8);
	obj = &gas;
	Dislay(obj);

	Vehicle v(12.3, 56, 8, 44);
	obj = &v;
	Dislay(obj);*/

	Copier c(1, 2, 3);
	return 0;
}