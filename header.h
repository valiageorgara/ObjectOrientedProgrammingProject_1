//File: header.h ==> function declarations

#include<iostream>
#include<ostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<ctime>
const double EulerConstant=2.71828182846;

using namespace std;

class Electron
{
	private:
		const double electricCharge; // = (-1)*EulerConstant;
		const string mass; //="5.48579909070*10^(-4)";
		const double spin; //=0.5;
		const string statistics; //="Fermi-Dirac";
		
	public:
		//Electron(){};
		Electron(/*const double,const string,const double,const string*/): //Initializer list must be used in constructor
			electricCharge((-1)*EulerConstant),
			mass("5.48579909070*10^(-4)"),
			spin(0.5),
			statistics("Fermi-Dirac")
			{
				cout << "An Electron has been constructed" << endl;
				///you can print the information if you wish
				//cout<< "Electron information: " << endl;
				//printElectronInfo();
			}
		~Electron() //destructor
		{
			cout << "An electron will be destroyed" << endl;
			
		}
		
		double getElectricCharge();
		string getMass();
		double getSpin();
		string getStat();
		
		void printElectronInfo();
};

class Gluon
{
	private:
		const double electricCharge;//=0*EulerConstant;
		const int mass;//=0;
		const int spin;//=1;
		const string statistics;//="Bose-Einstein";
		
	public:
		double getElectricCharge();
		int getMass();
		int getSpin();
		string getStat();
		//Gluon(){};
		Gluon(/*double, int, int,string*/):
			electricCharge(0*EulerConstant),
			mass(0),
			spin(1),
			statistics("Bose-Einstein")
			{
				cout << "A gluon has been constructed" << endl;
				///you can print the information if you wish
				//cout << "Gluon Information: " << endl;
				//printGluonInfo();
			}
		~Gluon()
		{
			cout << "A gluon will be destroyed" << endl;
		}
		
		void printGluonInfo();
	
};

class UpQuark
{
	private:
		const double electricCharge; //= (2/3)*EulerConstant;
		const string mass;// ="2.01MeV/c^2";
		const double spin; //=0.5;
		const string statistics; //="Fermi-Dirac";
		
	public:
		double getElectricCharge();
		string getMass();
		double getSpin();
		string getStat();
		//UpQuark(){};
		UpQuark(/*double,string,double,string*/):
			electricCharge((2/3)*EulerConstant),
			mass("2.01MeV/c^2"),
			spin(0.5),
			statistics("Fermi-Dirac")
			{
				cout << "An UpQuark has been constructed" << endl;
				///you can print the information if you wish
				//cout << "UpQuark Information: " << endl;
				//printUpQuarkInfo();
				
			}
		~UpQuark()
		{
				cout << "An UpQuark will be destroyed" << endl;
		}
		
		void printUpQuarkInfo();
	
};

class DownQuark
{
	private:
		const double electricCharge;//= ((-1)/3)*EulerConstant;
		const string mass;//="4.7MeV/c^2";
		const double spin;//=1/2;
		const string statistics;//="Fermi-Dirac";
		
	public:
		double getElectricCharge();
		string getMass();
		double getSpin();
		string getStat();
		//DownQuark(){};
		DownQuark(/*double,string,double,string*/):
			electricCharge(((-1)/3)*EulerConstant),
			mass("4.7MeV/c^2"),
			spin(0.5),
			statistics("Fermi-Dirac")
			{
					cout << "A DownQuark has been constructed" << endl;
					///you can print the information if you wish
					//cout << "DownQuark Information: " << endl;
					//printDownQuarkInfo();
			}
		~DownQuark()
		{
			cout << "A DownQuark will be destroyed" << endl;
		}
		
		void printDownQuarkInfo();	
};

class Neutron
{
	private:
		DownQuark dQ1,dQ2;
		UpQuark uQ;
		Gluon g1,g2,g3;
		const int electricCharge;//=0;
		const string mass;//="1.0085u";
		const double spin;//=0.5;
		const string statistics;//="Fermi-Dirac";
		
	public:
		int getElectricCharge();
		string getMass();
		double getSpin();
		string getStat();
		//Neutron(){};
		Neutron(/*DownQuark,UpQuark,Gluon,int,string,double,string*/):
			electricCharge(0),
			mass("1.0085u"),
			spin(0.5),
			statistics("Fermi-Dirac")
			{
				cout << "A Neutron has been constructed" << endl;
				///you can print the information if you wish
				//cout << "Neutron Information: " << endl;
				//printNeutronInfo();
			}
		~Neutron()
		{
			cout << "A Neutron will be destroyed" << endl;
		}
		
		void printNeutronInfo();
};

class Proton
{
	private:
		UpQuark uQ1,uQ2;
		DownQuark dQ;
		Gluon g1,g2,g3;
		const double electricCharge;//=1*EulerConstant;
		const string mass;//="1.007u";
		const double spin;//=0.5;
		const string statistics;//="Fermi-Dirac";
		
	public:
		double getElectricCharge();
		string getMass();
		double getSpin();
		string getStat();
		//Proton(){};
		Proton(/*UpQuark,DownQuark,Gluon,const double,const string,const double,const string*/):
				electricCharge(1*EulerConstant),
				mass("1.007u"),
				spin(0.5),
				statistics("Fermi-Dirac")
				{
					cout << "A Proton has been constructed" << endl;
					///you can print the information if you wish
					//cout << "Proton Information: " << endl;
					//printProtonInfo();
				}
		~Proton()
		{
			cout << "A Proton will be destroyed" << endl;
		}
		void printProtonInfo();
	
};

class Nucleus
{
	public:
		Proton *protons;
		Neutron *neutrons;
		

	//Nucleus(){};
	Nucleus(int p,int n)
	{
		protons = new Proton[p];
		neutrons = new Neutron[n];

	};
	~Nucleus()
	{
		delete[] protons;
		delete[] neutrons;
	}
};

class Atom
{
	private:
		Electron *electrons;
		Nucleus *nucleus;
		int numOfProtons;
		int numOfNeutrons;
		int numOfElectrons;
		
	public:
		void set_atom_and_mass_number(int,int);
		int get_atom_number(); //number of protons
		int get_mass_number(); //number of protons+neutrons
		double get_electric_charge();
		void printAtomInfo();	
		Atom(int p,int n)
		{
			cout << "////////////////////////////////" << endl;
			cout << "//An atom has been constructed//" << endl;
			cout << "////////////////////////////////" << endl;
			
			set_atom_and_mass_number(p,n);


			//default int numOfElectrons = numOfProtons//////////
			//for non-ionized atoms I could use a rand //////////
			//function to generate random numbers for electrons//
			numOfElectrons = p;		

			cout <<"Atom number: " << get_atom_number() << endl;
			cout <<"Mass number: " << get_mass_number() << endl;
			cout <<"Electric charge: " << get_electric_charge() << endl;

				
			
			electrons = new Electron[p];
			
			nucleus = new Nucleus(p,n);	
		}
		~Atom()
		{
			delete[] electrons;
			delete nucleus;
			cout << "/////////////////////////////" << endl;
			cout << "//An atom will be destroyed//" << endl;
			cout << "/////////////////////////////" << endl;
		}
};


