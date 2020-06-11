int compteur;
int choix_menu;
int compteur_passe;

typedef enum
{
    NONE = -1,
    PASSE = 0,
    MISE = 1,
    CAPOT = 2,
    GENERAL = 3,
    COINCHE = 4,
} type_contrat;

struct Carte
{
    int atout;
    int valeur_atout;
    int valeur_non_atout;
    int valeur_tout_atout;
    int valeur_sans_atout;
    int valeur;
    char affichage[10];
};

struct Contrat
{
    type_contrat type;
    int atout;
    int score_mini;
    char affichage[30];
};

typedef struct Contrat Contrat;

typedef struct Carte Carte;

struct Joueur
{
    char nom[20];
    Carte carte[8];
    Contrat contrat;
};

typedef struct Joueur Joueur;

struct Equipe
{
    Joueur joueur[2];
    int score;
};

typedef struct Equipe Equipe;
