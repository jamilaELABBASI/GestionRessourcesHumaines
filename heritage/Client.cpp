#include<iostream>
#include<string.h>
#include"Client.h"

using namespace std;

Client::Client(){
	strcpy(this->rs,"NULL");
	strcpy(this->adresse,"NULL");
}


Client::Client(char rs[20],char adresse[50]){
	strcpy(this->rs,rs);
	strcpy(this->adresse,adresse);
}

Client::~Client(){
	cout<<"\n"<<"Destruction Client"<<endl;
}

void Client::printClient(){
	cout<<"\n"<<this->rs<<this->adresse<<"\n";
}

