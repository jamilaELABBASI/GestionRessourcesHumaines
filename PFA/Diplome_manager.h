#include<stdio.h>
#include"Diplome.h"


  FILE * openfile(char mode[10]) {
  FILE* diplome=NULL;
  Diplome = fopen("Diplome.xls","mode");  // ouverture d fichier 
  if (diplome != NULL )                // si le fichier contient des donnees
  {
  	printf("_____  ouverture des fichiers diplome  _____\n");
  }
  else 
  {
  	printf("_____  impossible d'ouvrir des fichiers diplome  _____\n");
  	printf("\n");
  } return diplome;
}


//fonction : ajouter un diplome
   Diplome add_Diplome(Diplome d)
{
    FILE * file = fopen("Diplome.xls","a+");
    //fprintf(file,"\n");
    printf("_____  APPEL ADD DIPLOME  _____\n");
	printf("entrer id diplome : \t");
	scanf("%d",&d.id);
	fprintf(file,"%d\t",d.id);

    printf("entrer la specialite du diplome : \t");
	scanf("%s",d.spec);
	fprintf(file,"%s\t",d.spec);

    printf("entrer le titre du diplome : \t");
	scanf("%s",d.titre);
	fprintf(file,"%s\t",d.titre);
    
    fprintf(file, "%d\t%s\t%s\n",d.id,d.spec,d.titre);

    fclose(file);

}
   

// affich
void consulter_Diplome (){  
    Diplome d;                 // la lecture de fichier 
	printf("la liste des diplomes : \n");
    printf("\n");
    FILE * file = fopen("Diplome.xls","mode");
    while( fscanf(file,"%d\t%s\t%s\n", d.id,d.spec,d.titre)!= EOF)
    printf("%d\t%s\t%s\n",d.id,d.spec,d.titre);
     fclose(file);
}

// modifier un diplome
void modifier_Diplome()
{
    Diplome d ;
    Diplome q ;
    int n ;

    printf("donner les informations de diplome a modifie \n");
    printf("id : ");
    scanf("%d\n",d.id);
    printf("specialite :\t");
    scanf("%s\n",d.spec);
    printf("titre de diplome :\t");
    scanf("%s\n",d.titre);
    

    FILE * file = fopen("Diplome.xls", "mode");
    FILE * t = fopen("temp.xls", "mode");

    while(fscanf(file, "%d\t%s\t%s\n",&q.id,q.spec,q.titre)!= EOF)
    {
        if ((d.id==q.id)==0&&strcmp(d.spec,q.spec)==0 && strcmp(d.titre,q.titre)==0)
        {
            printf("vous voulez modifier : \n");
            printf("1- id de diplome\n");
            printf("2- specialite de diplome\n");
            printf("3- titre de diplome\n");
            scanf("%d", &n);
            if(n == 1)
            {
              printf("Nouveau id diplome : \t");
              scanf("%d", &d.id);
            }
            if(n == 2)
            {
              printf("Nouveau specialite du diplome : \t");
              scanf("%s",d.spec);
            }
            if(n == 3)
            {
              printf("Nouveau titre de diplome : \t");
              scanf("%s",d.titre);
            }
            fprintf(t, "%d\t%s\t%s\n", d.id,d.spec,d.titre);
        }
        else
            fprintf(t, "%d\t%s\t%s\n", q.id, q.spec, q.titre);
    }
    fclose(file);
    fclose(t);
    file = fopen("Diplome.xls", "mode");
    t = fopen("temp.xls", "mode");
    while(fscanf(t, "%d\t%s\t%s\n", q.id, q.spec, q.titre)!= EOF)
        fprintf(file,"%d\t%s\t%s\n",q.id, q.spec, q.titre);
    fclose(file);
    fclose(t);
    remove("temp.xls");
}


//rechercher un diplome
void rechercher_Diplome()
{
     Diplome d ;
     Diplome q;
     int trouve = 0 ;
     int n;
     FILE *file = fopen("Diplome.xls","mode");
    
     printf("Donner l'id de diplome a rechercher \n");
     scanf("%d",&n);
     while (fscanf(file,"%d\t%s\t%s\n", q.id, q.spec, q.titre)!= EOF)
     {
         //si la ligne est la ligne à rechercher
         if (n,d.id==0)
         {
             trouve = 1 ;
             printf("_________LES INFORMATIONS DE DIPLOME___________\n");
             printf("%d\t%s\t%s\n",d.id,d.spec,d.titre);
        }
        else
        {
        	printf("le diplome n'existe pas\n");
		}
		fclose(file);
}}


//supprimer un diplome
void supprimer_Diplome()
{
     Diplome d ;
     int n;
     FILE *file = fopen("Diplome.xls","mode");
     FILE * t = fopen("temporaire.xls", "mode");
     FILE * arch = fopen("archive.xls", "mode");
     //demander le nom de service à supprimer à l'utilisateur
     printf("Donner l'id de diplome a supprimer \n");
     scanf("%d",&n);
     int trouve = 0 ;

     //lecture du fichier diplome, ligne par ligne :
     while (fscanf(file,"%d\t%s\t%s\n", d.id, d.spec, d.titre)!= EOF)
     {
         //si la ligne est la ligne à supprimer
         if ((n,d.id)==0)
         {
             trouve = 1 ;
             fprintf(arch, "%d\t%s\t%s\n",d.id, d.spec, d.titre); // alors, on archive cette ligne dans le fichier archive.xls
         }
         // sinon, si la ligne n'est pas la ligne à supprimer
         else
            fprintf(t,"%d\t%s\t%s\n",d.id, d.spec, d.titre);// alors on l enregistre sur le fichier temporaire
     }
     // tester est ce que le nom à supprimer  existe ou pas !
     if (trouve == 1)
        printf("le diplome existe \n");
     else
        printf("le diplome n'existe pas \n");


     // fermer les trois fichiers : service, temporaire, et archive
     fclose (file);
     fclose (t);
     fclose(arch);

     // ouvrir les deux fichiers : service, temporaire
     file = fopen("Diplome.xls", "mode"); 
     t = fopen("temporaire.xls", "mode");

     //lecture du ficher temporaire, ligne par ligne
     while(fscanf(t, "%d\t%s\t%s\n",d.id, d.spec, d.titre)!=EOF)
        fprintf(file,"%d\t%s\t%s\n",d.id, d.spec, d.titre); // ecriture, de chaque ligne lue, sur le fichier personne

     //fermeture des fichiers : service et temporaire
     fclose(file);
     fclose(t);

     //suppression du fichier temporaire.xls
     remove("temporaire.xls");
}


