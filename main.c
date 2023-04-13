/*
TODO:
Recommencer tour si piece mangeen (sur la même piece)
forcer le joueur à jouer les coups obilgatoire (parmi une liste) => si vide laisser libre
Afficher a qui le tour
Compter les pieces des deux cotes
Faire le menu/scans (sauvegarder, jouer, etc)
Faire finir la partie
Sauvegarder la partie
Faire les logs
*/

#include "main.h"

int main(void)
{
    char checker[10][10]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                          {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};
    //printf("binaire : %s\nint 1 : %s\nint 2 : %s\n", argv[0], argv[1], argv[2]);
    //printf("nombre d'agrument : %d\n", argc);


    initChecker(checker,NULL);
    showChecker(checker);
    return (0);
}