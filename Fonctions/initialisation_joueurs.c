void initialisation_joueurs(Carte *paquet_total, Joueur *joueur, char *nom_joueur)
{
    int i = 0, j = 0;
    strcpy(joueur[0].nom, nom_joueur);
    strcpy(joueur[1].nom, "Ouest\0");
    strcpy(joueur[2].nom, "Nord\0");
    strcpy(joueur[3].nom, "Est\0");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            joueur[i].carte[j] = paquet_total[i * 3 + j];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            joueur[i].carte[j + 3] = paquet_total[i * 2 + j + 12];
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            joueur[i].carte[j + 5] = paquet_total[i * 3 + j + 20];
        }
    }
     for (i = 0; i < 4; i++)
    {
        printf("%s\n", joueur[i].nom);
        for (j = 0; j < 8; j++)
        {
            printf("%s ", joueur[i].carte[j].affichage);
        }
        printf("\n");
    }

}
