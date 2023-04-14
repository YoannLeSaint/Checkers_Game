#include "game.h"


void initGame(){
    char checker[10][10];

    initChecker(checker, NULL);
    showChecker(checker);
    while(1) {

        chooseMove(checker,'O');
        showChecker(checker);
        chooseMove(checker,'@');
        showChecker(checker);
    }
}

void nextMove() {

}


