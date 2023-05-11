#include<stdio.h>
#include"Employe.h"


 FILE * openfile(char mode[10])
   {
  FILE* employe=NULL;
  
  employe = fopen("Employe.xls","mode");  // ouverture d fichier 
  if (employe != NULL )                // si le fichier contient des donnees
  {
  	printf("_____  ouverture des fichiers employe  _____");
  }
  else 
  {
  	printf("_____  impossible d'ouvrir des fichiers employe  _____");
  	printf("\n");
  } return employe;
}


//fonction : ajouter un employe
   void add_Employe()
{
    Employe e ;
    FILE * file = fopen("Employe.xls","a+");
    //fprintf(file,"\n");
    printf("_____  APPEL ADD EMPLOYE  _____\n");
	printf("entrer id employe : ");
	scanf("%d",&e.idEmp);
	fprintf(file,"%d\t",e.idEmp);

    printf("entrer nom d'employe : ");
	scanf("%s",e.nomEmp);
	fprintf(file,"%s\t",e.nomEmp);

    printf("entrer prenom d'employe : ");
	scanf("%s",e.prenomEmp);
	fprintf(file,"%s\t",e.prenomEmp);
    
    printf("\n\n\n");
	
	printf("______________ entrer date naissance d'Employe :_______________\n");
	printf("JOUR :");
	scanf("%d",&e.dateNaissEmp.jour);
	printf("MOIS :");
	scanf("%d",&e.dateNaissEmp.mois);
	printf("ANNEE :");
	scanf("%d",&e.dateNaissEmp.annee);
	fprintf(file,"%d\t%d\t%d\t",e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee);
	printf("\n\n\n");

	printf("____________ entrer date de recrutement d'Employe :____________\n");
	printf("JOUR :");
	scanf("%d",&e.dateRecEmp.jour);
	printf("MOIS :");
	scanf("%d",&e.dateRecEmp.mois);
	printf("ANNEE :");
	scanf("%d",&e.dateRecEmp.annee);
	fprintf(file,"%d\t%d\t%d\n",e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee);
	printf("\n\n");
	
    /*s= add_Service(s);  
    printf("entrer le nombre du diplome Employe :");
	scanf("%d",&n);
	 
		for(i=0;i<=n;i++)
		{
	d=add_Diplome(d);
     	}*/
    
    fclose(file);

}









   

//afficher employe
void consulter_Employe (){  
    Employe e;    
	             // la lecture de fichier 
	printf("_____________________la liste des employes___________________________________\n");
    printf("\n");
    FILE * file = fopen("Employe.xls","r");
    while( fscanf(file,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",&e.idEmp,e.nomEmp,e.prenomEmp,&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee,&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee)!= EOF)
    printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n\n",e.idEmp,e.nomEmp,e.prenomEmp,e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee,e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee);
    printf("*******************************************************************************");
	 fclose(file);
}








//modifier employe
void modifier_Employe()
{
    Employe e ;
    Employe q ;
    int n ;
    
    printf("______donner les informations d'employe a modifie_____ \n");
    printf("id: \t");
    scanf("%d",e.idEmp);
    printf("nom d'employe\t");
    scanf("%s",e.nomEmp);
    printf("prenom d'employe\t");
    scanf("%s",e.prenomEmp);
    printf("\n");
    printf("_________________DATE DE NAISSANCE________________\n");
    scanf("%d\t%d\t%d\n",&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee);
    printf("\n");
    printf("_________________DATE DE RECRUTEMENT______________\n");
    scanf("%d\t%d\t%d\n",&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee);

    FILE * file = fopen("Employe.xls", "r");
    FILE * t = fopen("temp.xls", "w");

    while( fscanf(file,"%d\t%s\t%s%d\t%d\t%d\t%d\t%d\t%d\n",&e.idEmp,e.nomEmp,e.prenomEmp,&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee,&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee)!= EOF)
    {
        if ((e.idEmp==q.idEmp)&&strcmp(e.nomEmp,q.nomEmp)&&strcmp(e.prenomEmp,q.prenomEmp)&&strcmp(e.dateNaissEmp.jour,q.dateNaissEmp.jour)&&strcmp(e.dateNaissEmp.mois,q.dateNaissEmp.mois)&&strcmp(e.dateNaissEmp.annee,q.dateNaissEmp.annee)&&strcmp(e.dateRecEmp.jour,q.dateRecEmp.jour)&&strcmp(e.dateRecEmp.mois,q.dateRecEmp.mois)&&strcmp(e.dateRecEmp.annee,q.dateRecEmp.annee))
        {
            printf("vous voulez modifier : \n");
            printf("1- id d'employe\n");
            printf("2- nom d'employe\n");
            printf("3- prenom d'employe\n");
            printf("4- date de naissance\n");
            printf("5- date de recrutement\n");

            scanf("%d", &n);
            if(n == 1)
            {
              printf("Nouveau id d'employe : \n");
              scanf("%d", &e.idEmp);
            }
            if(n == 2)
            {
              printf("Nouveau nom d'employe : \n");
              scanf("%s", e.nomEmp);
            }
            if(n == 3)
            {
              printf("Nouveau prenom d'employe: \n");
              scanf("%s",e.prenomEmp);
            }
            fprintf(t, "%d\t%s\t%s\n", e.idEmp, e.nomEmp, e.prenomEmp);
            
            if(n == 4)
            {
              printf("Nouveau date de naissance: \n");
              scanf("%d\t%d\t%d\n",&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee);
            }
            fprintf(t,"%d\t%d\t%d\n",&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee);
            
            if(n == 5)
            {
              printf("Nouveau date de recrutement : \n");
              scanf("%d\t%d\t%d\n",&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee);
            }
            fprintf(t,"%d\t%d\t%d\n",&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee);
            
        }
        else
            fprintf(t,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", q.idEmp,q.nomEmp,q.prenomEmp,q.dateNaissEmp.jour,q.dateNaissEmp.mois,q.dateNaissEmp.annee,q.dateRecEmp.jour,q.dateRecEmp.mois,q.dateRecEmp.annee);
    }
    fclose(file);
    fclose(t);
    file = fopen("Employe.xls", "w");
    t = fopen("temp.xls", "r");
    while(fscanf(t, "%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t\n",&q.idEmp,q.nomEmp,q.prenomEmp,&q.dateNaissEmp.jour,&q.dateNaissEmp.mois,&q.dateNaissEmp.annee,&q.dateRecEmp.jour,&q.dateRecEmp.mois,&q.dateRecEmp.annee)!= EOF)
            fprintf(t,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t\n", q.idEmp,q.nomEmp,q.prenomEmp,q.dateNaissEmp.jour,q.dateNaissEmp.mois,q.dateNaissEmp.annee,q.dateRecEmp.jour,q.dateRecEmp.mois,q.dateRecEmp.annee);
    fclose(file);
    fclose(t);
    remove("temp.xls");
}


//rechercher employe
void rechercher_Employe()
{
     Employe e ;
     int trouve = 0 ;
     int n;
     FILE *file = fopen("Employe.xls","r");
     FILE * t = fopen("temporaire.txt", "w");

    
     printf("Donner l'id d'employe a rechercher \n");
     scanf("%d",&n);
    while( fscanf(file,"%d\t%s\t%s%d\t%d\t%d\t%d\t%d\t%d\n",&e.idEmp,e.nomEmp,e.prenomEmp,&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee,&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee)!= EOF)
     {
         //si la ligne est la ligne à rechercher
         if (n==e.idEmp)
         {
             trouve = 1 ;
             printf("_________LES INFORMATIONS DE EMPLOYE___________\n");
    
    printf("\n");
    printf("ID :%d\n",e.idEmp);
    printf("NOM : %s \n",e.nomEmp);
    printf("PRENOM : %s \n",e.prenomEmp);
    printf("JOUR DE NAISSANCE : %d \n",e.dateNaissEmp.jour);
    printf("MOIS DE NAISSANCE : %d \n",e.dateNaissEmp.mois);
    printf("ANNEE DE NAISSANCE : %d \n",e.dateNaissEmp.annee);
    printf("JOUR DE RECRUTEMENT : %d \n",e.dateRecEmp.jour);
    printf("MOIS DE RECRUTEMENT : %d \n",e.dateRecEmp.mois);
    printf("ANNEE DE RECRUTEMENT :%d \n",e.dateRecEmp.annee);

	//printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",e.idEmp,e.nomEmp,e.prenomEmp,e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee,e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee);
   
		}
        else
        {
        	printf("l'employe n'existe pas");
		}
		fclose(file);
		//fclose(t);
}}


//supprimer employe
void supprimer_Employe()
{
    Employe e;
    int n;
    int trouve = 0 ;

     FILE *file = fopen("Employe.xls","r");
     FILE * t = fopen("temporaire.xls", "w");
     FILE * arch = fopen("archive.xls", "a");
     //demander le nom de service à supprimer à l'utilisateur
     printf("Donner l'id d'employe a supprimer \n");
     scanf("%d",&n);

    while( fscanf(file,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",&e.idEmp,e.nomEmp,e.prenomEmp,&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee,&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee)!= EOF)
     {
         //si la ligne est la ligne à supprimer
         if (n==e.idEmp)
         {
             trouve = 1 ;
             fprintf(arch,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",e.idEmp,e.nomEmp,e.prenomEmp,e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee,e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee); // alors, on archive cette ligne dans le fichier archive.xls
         }
         // sinon, si la ligne n'est pas la ligne à supprimer
         else
            fprintf(t,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",e.idEmp,e.nomEmp,e.prenomEmp,e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee,e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee);// alors on l enregistre sur le fichier temporaire
     }
     // tester est ce que le nom à supprimer  existe ou pas !
     if (trouve == 1)
        printf("l'employe est supprime \n");
     else
        printf("l'id n existe pas \n");


     // fermer les trois fichiers : service, temporaire, et archive
     fclose (file);
     fclose (t);
     fclose(arch);

     // ouvrir les deux fichiers : service, temporaire
     file = fopen("Employe.xls", "w"); 
     t = fopen("temporaire.xls", "r");

     //lecture du ficher temporaire, ligne par ligne
     while(fscanf(t, "%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",&e.idEmp,e.nomEmp,e.prenomEmp,&e.dateNaissEmp.jour,&e.dateNaissEmp.mois,&e.dateNaissEmp.annee,&e.dateRecEmp.jour,&e.dateRecEmp.mois,&e.dateRecEmp.annee)!=EOF)
        fprintf(file,"%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",e.idEmp,e.nomEmp,e.prenomEmp,e.dateNaissEmp.jour,e.dateNaissEmp.mois,e.dateNaissEmp.annee,e.dateRecEmp.jour,e.dateRecEmp.mois,e.dateRecEmp.annee); // ecriture, de chaque ligne lue, sur le fichier personne

     //fermeture des fichiers : service et temporaire
     fclose(file);
     fclose(t);

     //suppression du fichier temporaire.xls
     remove("temporaire.xls");
}


