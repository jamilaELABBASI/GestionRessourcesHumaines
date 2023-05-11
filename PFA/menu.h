#include<stdio.h>
#include"Employe_manager.h"
#include"Diplome_manager.h"
#include"Service_manager.h"



void menu (){
int n;
	
	printf("___________GESTION DE RESSOURCE HUMAINES___________\n");
	printf("________________________MENU________________________\n");
	printf("1- GESTION D'EMPLOYE\n");
	printf("2- GESTION DE SERVICE\n");
	printf("3- GESTION DE DIPLOME\n");
    printf("4- QUITTER\n");

	do {
		printf("DONNEZ VOTRE CHOIX\n");
		scanf("%d",n);
		if(n==1)
		{
			printf("___________ESPACE EMPLOYE___________\n");
			printf("1- AJOUTER EMPLOYE\n");
			printf("2- CONSULTER EMPLOYE\n");
			printf("3- MODIFIER EMPLOYE\n");
			printf("4- RECHERCHER EMPLOYE\n");
			printf("5- SUPPRIMER EMPLOYE\n");
			printf("6- QUITTER\n");
}
				do{
					printf("DONNEZ VOTRE CHOIX\n");
				    scanf("%d",&n);
			       if(n==1)
						add_Employe();
			
					    if(n==2)
						  consulter_Employe();
			
							if(n==3)
							   modifier_Employe();
			                   
								if(n==4)
								   rechercher_Employe();
			
									if(n==5)
									    supprimer_Employe();
			                               
			                               else
										   exit(0);
							}while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6);
    }
         else if(n==2)
		{
			printf("___________ESPACE SERVICE___________");
			printf("1- AJOUTER SERVICE");
			printf("2- CONSULTER SERVICE");
			printf("3- MODIFIER SERVICE");
			printf("4- RECHERCHER SERVICE");
			printf("5- MODIFIER SERVICE");
			printf("6- SUPPRIMER SERVICE");
			printf("7- QUITTER");
	
					do{
					printf("DONNEZ VOTRE CHOIX\n");
				    scanf("%d",&n);
			       if(n==1)
						add_Service();
			
					    if(n==2)
						  consulter_Service();
			
							if(n==3)
							   modifier_Service();
			                   
								if(n==4)
								   rechercher_Service();
			
									if(n==5)
									    supprimer_Service();
			                               else
										   exit(0);
							}while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6); 
    }
        
        else if(n==3)
		{
			printf("___________ESPACE DIPLOME___________");
			printf("1- AJOUTER DIPLOME");
			printf("2- CONSULTER DIPLOME");
			printf("3- MODIFIER DIPLOME");
			printf("4- RECHERCHER DIPLOME");
			printf("5- MODIFIER DIPLOME");
			printf("6- SUPPRIMER DIPLOME");
			printf("7- QUITTER");
	
				do{
					printf("DONNEZ VOTRE CHOIX\n");
				    scanf("%d",&n);
			       if(n==1)
						add_Diplome();
			
					    if(n==2)
						  consulter_Diplome();
			
							if(n==3)
							   modifier_Diplome();
			                   
								if(n==4)
								   rechercher_Diplome();
			
									if(n==5)
									    supprimer_Diplome();
			                               else 
										   exit(0);
										   
							}while(n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6);
    }
    
    
}*/

