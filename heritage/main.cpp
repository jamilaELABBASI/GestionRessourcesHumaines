#include <iostream>
#include "CompteEntreprise.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	compteEntreprise c1;
	compteEntreprise c2(1000,100000,"S2I","CASA",800000);
	c1.printCompteEntreprise();
	c2.printCompteEntreprise();
	
	
	
	
	
	
	
	return 0;
}
