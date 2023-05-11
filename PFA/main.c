#include<stdio.h>
#include"Employe_manager.h"
int main(){

int n;
	
	printf("___________GESTION DE RESSOURCE HUMAINES___________\n");
	printf("________________________MENU________________________\n");
	printf("1- GESTION D'EMPLOYE\n");
	printf("2- GESTION DE SERVICE\n");
	printf("3- GESTION DE DIPLOME\n");
    printf("4- QUITTER\n");
    printf("donnez votre choix");
	scanf("%d",&n);

	
			printf("___________ESPACE EMPLOYE___________\n");
			printf("1- AJOUTER EMPLOYE\n");
			printf("2- CONSULTER EMPLOYE\n");
			printf("3- MODIFIER EMPLOYE\n");
			printf("4- RECHERCHER EMPLOYE\n");
			printf("5- SUPPRIMER EMPLOYE\n");
			printf("6- QUITTER\n");

			
						add_Employe();
			
						  consulter_Employe();
			
							   modifier_Employe();
			                   
								   rechercher_Employe();
			
									    supprimer_Employe();
			                               
										   printf("fermer");



/*

printf("___________ESPACE SERVICE___________");
			printf("1- AJOUTER SERVICE");
			printf("2- CONSULTER SERVICE");
			printf("3- MODIFIER SERVICE");
			printf("4- RECHERCHER SERVICE");
			printf("5- MODIFIER SERVICE");
			printf("6- SUPPRIMER SERVICE");
			printf("7- QUITTER");
	
					
					printf("DONNEZ VOTRE CHOIX\n");
				    scanf("%d",&n);
						add_Service();
			
						  consulter_Service();
			
							   modifier_Service();
			                   
								   rechercher_Service();
			
									    supprimer_Service();
			                               else
										   printf("fermer");








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
										  printf("fermer");
										   
    }
    

*/




















return 0;}
