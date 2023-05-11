#include<iostream>
#include"CompteB.h"


using namespace std;
CompteB::CompteB(){
	this->numCmp=0;
	this->solde=0;
	
}

CompteB::CompteB(int numCmp,float solde){
	this->numCmp=numCmp;
	this->solde=solde;
}
CompteB::~CompteB(){
	cout<<"\n Destruction CompteB"<<endl;
}

void CompteB::printCompteB(){
	cout<<"\n "<<this->numCmp<<"\t"<<this->solde<<endl;
}


