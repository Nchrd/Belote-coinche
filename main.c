#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(65001);
#endif

bool exit = false;

Joueur joueur[4];
Contrat contrat;
Carte paquet_total[32];
char *nom_joueur = malloc(sizeof(char)*20);
compteur = 0;

printf("--------------------------------------------------------------------------------------------------------------------");
printf("-                       =====     =======    ==          =====     =======     =======                             -");
printf("-                       =     =   =          ==         =     =       =        =                                   -");
printf("-                       =     =   =          ==         =     =       =        =                                   -");  /* Dessin de présentation */
printf("-                       =   ==    ====       ==         =     =       =        ====                                -");
printf("-                       =     =   =          ==         =     =       =        =                                   -");
printf("-                       =     =   =          ==         =     =       =        =                                   -");
printf("-                       =====     =======    =======     =====        =        =======                             -");
printf("--------------------------------------------------------------------------------------------------------------------\n");


printf("Quel est votre nom ? (20 caracteres max)\n");
    gets(nom_joueur);
printf("Bonjour %s, que voulez-vous faire ?\n    1. Nouvelle partie\n    2. Meilleurs scores\n    3. Quitter\n", nom_joueur);
    scanf("%d", &choix_menu);

switch(choix_menu){
case 1 :
    printf("\nDebut de la partie !\n");
    printf("Les cartes ont ete melangees, distribution des cartes...\n\n");

    melange(paquet_total);
    initialisation_paquet_total(paquet_total);
    initialisation_joueurs(paquet_total, joueur, nom_joueur);
    affichage_enchere(choix, joueur, &contrat);
    break;
case 2 :
    break;
case 3 :
    exit = true;
    break;
}
    return 0;
}
