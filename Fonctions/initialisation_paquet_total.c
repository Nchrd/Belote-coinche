void initialisation_paquet_total(Carte *paquet_total)
{
    int i = 0, j = 0;
    char chiffre[3];
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 9; j++)
        {
            paquet_total[i * 8 + j - 1].atout = i;
            strcpy(paquet_total[i * 8 + j - 1].affichage, "\0");
            switch (j)
            {
            case 1:
                strcat(paquet_total[i * 8 + j - 1].affichage, "V");
                paquet_total[i * 8 + j - 1].valeur_atout = 20;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 2;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 14;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 2;

                break;
            case 2:
                sprintf(chiffre, "%d", 9);
                strcat(chiffre, "\0");
                strcat(paquet_total[i * 8 + j - 1].affichage, chiffre);
                paquet_total[i * 8 + j - 1].valeur_atout = 14;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 0;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 9;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 0;
                break;
            case 3:
                strcat(paquet_total[i * 8 + j - 1].affichage, "A");
                paquet_total[i * 8 + j - 1].valeur_atout = 11;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 11;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 6;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 19;
                break;
            case 4:
                sprintf(chiffre, "%d", 10);
                strcat(chiffre, "\0");
                strcat(paquet_total[i * 8 + j - 1].affichage, chiffre);
                paquet_total[i * 8 + j - 1].valeur_atout = 10;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 10;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 5;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 10;
                break;
            case 5:
                strcat(paquet_total[i * 8 + j - 1].affichage, "R");
                paquet_total[i * 8 + j - 1].valeur_atout = 3;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 3;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 1;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 3;
                break;
            case 6:
                strcat(paquet_total[i * 8 + j - 1].affichage, "D");
                paquet_total[i * 8 + j - 1].valeur_atout = 4;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 4;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 3;
                paquet_total[i * 8 + j - 1].valeur_sans_atout = 4;
                break;
            default:
                sprintf(chiffre, "%d", j);
                strcat(chiffre, "\0");
                strcat(paquet_total[i * 8 + j - 1].affichage, chiffre);
                paquet_total[i * 8 + j - 1].valeur_atout = 0;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 0;
                paquet_total[i * 8 + j - 1].valeur_tout_atout = 0;
                paquet_total[i * 8 + j - 1].valeur_non_atout = 0;
                break;
            }
            switch (i)
            {
            case 0:
                strcat(paquet_total[i * 8 + j - 1].affichage, "♠");
                break;
            case 1:
                strcat(paquet_total[i * 8 + j - 1].affichage, "♣");
                break;
            case 2:
                strcat(paquet_total[i * 8 + j - 1].affichage, "♥");
                break;
            case 3:
                strcat(paquet_total[i * 8 + j - 1].affichage, "♦");
                break;
            }
        }
    }
}
