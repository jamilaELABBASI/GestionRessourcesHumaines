//l'entite Employe


typedef struct dateEmp{
	int jour;
	int mois;
	int annee;
}dateEmp;

typedef struct Employe{
	int idEmp;
	char nomEmp[20];
	char prenomEmp[20];
    dateEmp dateNaissEmp;
    dateEmp dateRecEmp;
    
    
}Employe;


