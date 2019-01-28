//file:definitions.cpp ==> function definitions

#include"header.h"

///////////////for class Electron////////////////////////
double Electron::getElectricCharge()
{
	return this->electricCharge;
}
string Electron::getMass()
{
	return this->mass;
}
double Electron::getSpin()
{
	return this->spin;
}
string Electron::getStat()
{
	return this->statistics;
}
		
void Electron::printElectronInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " << getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}
//for class Gluon

double Gluon::getElectricCharge()
{
	return this->electricCharge;
}
int Gluon::getMass()
{
	return this->mass;
}
int Gluon::getSpin()
{
	return this->spin;
}
string Gluon::getStat()
{
	return this->statistics;
}

void Gluon::printGluonInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " << getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}

////////////////////////////////for class UpQuark////////////////////////////////
double UpQuark::getElectricCharge()
{
	return this->electricCharge;
}
string UpQuark::getMass()
{
	return this->mass;
}
double UpQuark::getSpin()
{
	return this->spin;
}
string UpQuark::getStat()
{
	return this->statistics;
}		
void UpQuark::printUpQuarkInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " << getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}

//////////////////////////////for class DownQuark///////////////////////////

double DownQuark::getElectricCharge()
{
	return this->electricCharge;
}
string DownQuark::getMass()
{
	return this->mass;
}
double DownQuark::getSpin()
{
	return this->spin;
}
string DownQuark::getStat()
{
	return this->statistics;
}
void DownQuark::printDownQuarkInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " << getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}

/////////////////////////for class Neutron////////////////////////
int Neutron::getElectricCharge()
{
	return this->electricCharge;
}
string Neutron::getMass()
{
	return this->mass;
}
double Neutron::getSpin()
{
	return this->spin;
}
string Neutron::getStat()
{
	return this->statistics;
}		
void Neutron::printNeutronInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " << getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}
/////////////////////////for class Proton///////////////////////
double Proton::getElectricCharge()
{
	return this->electricCharge;
}
string Proton::getMass()
{
	return this->mass;
}
double Proton::getSpin()
{
	return this->spin;
}
string Proton::getStat()
{
	return this->statistics;
}
void Proton::printProtonInfo()
{
	cout<< "electrical charge: "<< getElectricCharge() << endl
	    << "mass: " << getMass() << endl
	    << "spin: " <<getSpin() << endl
	    << "statistics: " << getStat() <<  endl;
}
/////////////////////for class Atom/////////////////////////////////
void Atom::set_atom_and_mass_number(int a,int b)
{
	numOfProtons = a;
	numOfNeutrons = b;
}
int Atom::get_atom_number()
{
	return numOfProtons;
}
int Atom::get_mass_number()
{
	return (numOfProtons + numOfNeutrons);
}
double Atom::get_electric_charge()
{
	return ((numOfProtons*1)+(numOfElectrons*(-1)));
}