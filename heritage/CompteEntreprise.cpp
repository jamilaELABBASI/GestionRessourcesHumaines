#include<iostream>
#include<string.h>
#include "CompteEntreprise.h"

using namespace std;

CompteEntreprise::CompteEntreprise():CompteB(),Client(){
	this->capital=0;
}

CompteEntreprise::CompteEntreprise(int numCmp,float solde,char rs[20],char adresse[50],float capital):CompteB(numCmp,solde),Client(rs,adresse){
	    this->capital=capital;

}

CompteEntreprise::~CompteEntreprise()  {
	cout<<"\n"<<"Destruction compte Entreprise"<<endl;
}  

void CompteEntreprise::printCompteEntreprise(){
	cout<<"\n"<<"______________Compte Entreprise____________"<<endl;
	CompteB::printCompteB();
	Client::printClient();
	cout<<this->capital<<"\n";
}
