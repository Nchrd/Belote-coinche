void affichage_contrat(Contrat *contrat)
{
    if (contrat->type == PASSE)
    {
        strcpy(contrat->affichage, "Passe\0");
    }
    else if (contrat->type == MISE)
    {
        char tmp[3];
        sprintf(tmp, "%d", contrat->score_mini);
        strcpy(contrat->affichage, tmp);
    }
    else if (contrat->type == GENERAL)
    {
        strcpy(contrat->affichage, "General\0");
    }
    else if (contrat->type == CAPOT)
    {
        strcpy(contrat->affichage, "Capot\0");
    }
    else if (contrat->type == NONE)
    {
        strcpy(contrat->affichage, "Non\0");
    }

}
