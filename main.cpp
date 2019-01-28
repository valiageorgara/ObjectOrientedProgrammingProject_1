#include"header.h"

using namespace std;

int main(void)
{
	
	int numOfAtoms,numOfProtons=0,numOfNeutrons=0,totalElectricCharge=0,i,n;
	
	/* initialize random seed: */
  	srand (time(NULL));

	numOfAtoms=rand()%100+1;
	cout << numOfAtoms << " atoms will be created below!" << endl;
	Atom *atom[numOfAtoms];
	
	for(i=0;i<numOfAtoms;i++)
	{
		
		atom[i]=new Atom(6,n = rand()%3+6);
		numOfProtons+=6;
		numOfNeutrons+=n;
		totalElectricCharge+=atom[i]->get_electric_charge();
		
	}

	for(i=0;i<numOfAtoms;i++)
		delete atom[i];

	cout << "Total number of protons: " << numOfProtons << endl
	     << "Total number of neutrons: " << numOfNeutrons << endl
	     << "Total electric charge: " << totalElectricCharge << endl;

	
		
	

	return 0;
}

