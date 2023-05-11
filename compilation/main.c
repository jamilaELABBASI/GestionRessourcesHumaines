#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	
	
	
	//****** la suppression ********************
     //*******************************************
     //ouvrir trois fichiers : personne, temporaire, archive
	 FILE *file = openfile("r");
	 FILE * t = fopen("temporaire.xls", "w");
     FILE * arch = fopen("archive.xls", "a");
     //demander le nom de la personne à supprimer à l'utilisateur
     int n;
     Diplome d;
     printf("SAISIR L'ID DU DIPLOME \n");
     scanf("%d",&n);
     int trouve = 0 ;

     //lecture du fichier Employe, ligne par ligne :
     while (fscanf(f,"%d\n",&d.id)!= EOF )
     {
         //si la ligne est la ligne à supprimer
         if (&id,&d.id)
         {
             trouve = 1 ;
             fprintf(arch,"%d\t%s\t%s\n", d.id, d.spec,d.titre); // alors, on archive cette ligne dans le fichier archive.txt
         }
         // sinon, si la ligne n'est pas la ligne à supprimer
         else
            fprintf(t,"%d\t%s\t%s\n", d.id, d.spec,d.titre);// alors on l enregistre sur le fichier temporaire
     }
     // tester est que le nom à supprimer  existe ou pas !
     if (trouve == 1)
        printf("l'employe existe \n");
     else
        printf("l'employe n'existe pas \n");


     // fermer les trois fichiers : personne, temporaire, et archive
     fclose (f);
     fclose (t);
     fclose(arch);

     // ouvrir les deux fichiers : personne, temporaire
     f = fopen("Diplome.xsl","w"); // le mode "w" ouvre le fichier personne en supprimant son ancien contenu
     t = fopen("temporaire.xsl","r");

     //lecture du ficher temporaire, ligne par ligne
     while (fscanf(f, "%s\n", d.nom)!= EOF )
        fprintf(f,"%s\n", d.nom); // ecriture, de chaque ligne lue, sur le fichier personne

     //fermeture des fichiers : personne et temporaire
     fclose(f);
     fclose(t);

     //suppression du fichier temporaire.txt
     remove("temporaire.xsl");

}

	
	return 0;
}
