/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
    #include <stdio.h>

//définition des structures
    #include <stdio.h>
typedef struct {
    char ville[20];
    char rue[20];
    int codepostal;
}Adresse;

typedef struct {
    char nom[10];
    char prenom[10];
    int age;
    double note;
    Adresse adresse;
}Apprenant;
Apprenant ap;// déclartion globale pour pouvoire y accéder dans toutes les fonctions
//fonction pour lire les in formations 

void lire() {
    printf("entre votre nom:/n");
    scanf("%s", ap.nom);
    printf("entre votre prenom:/n");
    scanf("%s", ap.prenom);
    printf("entre votre Age:/n");
    scanf("%d", &ap.age);
    printf("entre la note:/n");
    scanf("%lf",&ap.note);
    printf("afficher l'adresse:/n");
    printf("entre votre ville:/n");
    scanf("%s", ap.adresse.ville);
    printf("entre votre rue: /n");
    scanf("%s", ap.adresse.rue);
    printf("entre votre code-postal: /n");
    scanf("%d", &ap.adresse.codepostal);
}
// fonction pour afficher les informations
void afficher() {
    printf("votr nom est: %s/n", ap.nom);
    printf("votre prenom est: %s/n", ap.prenom);
    printf("votre age est:%d/n", ap.age);
    printf("votre note est:%.f/n", ap.note);
    printf("votre ville est:%s/n", ap.adresse.ville);
    printf("votre rue est:%s/n", ap.adresse.rue);
    printf("votre code postal est:%d/n", ap.adresse.codepostal);
}
//fonction pour Mettre à jour les informations
void MettreAjour(){
 printf("entre le nouveau nom est (actuel:%s):/n", ap.nom);
 scanf("%s",ap.nom);
 printf("entre le nouveau prenom est(actuel:%s):/n",ap.prenom);
 scanf("%s",ap.prenom);
 printf(" entre le nouvel age est (actuel:%d):/n",ap.age);
 scanf("%d",&ap.age);
 printf("entre la nouvelle note est (actuel:%f):/n",ap.note);
 scanf("%lf", &ap.note);
 printf(" entre nouveau ville (actuel:%s):/n",ap.adresse.ville);
 scanf("%s",ap.adresse.ville);
 printf(" entre nouveau rue (actuel:%s):/n",ap.adresse.rue);
 scanf("%s",ap.adresse.rue);
 printf(" entre nouveau codepostal (actuel:%d):/n",ap.adresse.codepostal);
 scanf("%d",&ap.adresse.codepostal);
 
}
// fonction pour supprimer les informations (réinitialisation)
void supprimer(){
ap.nom [0]='\0'; //rèinitialisation du nom
ap.prenom [0]='\0';
ap.age=0;
ap.note=0.0;
ap.adresse.ville [0]='\0';
ap.adresse.rue [0]='\0';
ap.adresse.codepostal=0; 
printf("les informations ont été supprimées.\n");

}

//fonction principale
void main(){
  int p;
  do {
    printf("\n Menu\n");
    printf("1.lire les informations\n");
    printf("2.afficher les informations\n");
    printf("3.Mettre à jour les informations\n");
    printf("4.supprimer les informations\n");
    printf("5.Quitter \n");
    printf("choisissez une option :");
    scanf("%d",&p);
    
    switch (p) {
        case 1:
        lire();
        break;
        case 2:
        afficher();
        break;
        case 3:MettreAjour();
        break;
        case 4:
        supprimer();
        break;
        case 5:
        printf(" au revoir !\n");
        break;
        default:
        printf("option invalide\n");
        
        
        }
   } while(p != 5);


    return 0;
}