#include "menu.h"

void displayMenu() {
    char input;

    while (1) {
        printf("\n--- MENU ---\n");

        printf("Choisissez une option :\n"
               "\t 1) Commencer une partie\n"
               "\t 2) Continuer une partie sauvegarder\n"
               "\t 3) Consulter les logs\n\n"
               "Appuiyer sur 'q' pour quitter\n");

        input = (char) getchar();
        getchar();
        //scanf("%c", &input);

        switch (input) {
            case 'q':
                printf("Au revoir !\n");
                exit(0);
            case 'Q':
                printf("Au revoir !\n");
                exit(0);
            case '1':
                printf("La partie commence ...\n");
                initGame();
                break;
            case '2':
                printf("Selectionnez une partie enregistree");
                continue;
                break;
            case '3':
                printf("3");
                continue;
                break;
            default:
                printf("Entree incorecte, veuillez saisir une des options proposees\n");
                break;
        }
    }
}