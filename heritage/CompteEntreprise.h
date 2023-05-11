#include "CompteB.h"
#include "Client.h"


class compteEntreprise:public CompteB, public Client{
	
	private:
		float capital;
		
	public:
		compteEntreprise();
		compteEntreprise(int numCmd,float solde,char rs[20],char adresse[50],float capital);
        ~compteEntreprise();
        void printCompteEntreprise();

};

