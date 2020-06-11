void retour_paquet_total(Carte *paquet_total, Joueur *joueur, char *nom_joueur){

    for(int i = 0; i<4; i++){
        for(int j = 0; j<8; j++){
            paquet_total[i*3 + j] = joueur[i].carte[j];
        }
    }

}
