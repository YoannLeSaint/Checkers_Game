#include "checker.h"

void initStructureNextMove(next_move *init_next_move,int* pieceToMove,int*positionToEnd,nbPieceTaken)
{
    if (init_next_move != NULL)
    {
        init_next_move->pieceToMove=pieceToMove;
        init_next_move->positionToEnd=positionToEnd;
        init_next_move->_next = NULL;
        init_next_move->_previous = NULL;
    }
}


void AddNextMove(next_move *full_next_move,int* pieceToMove,int*positionToEnd,nbPieceTaken)
{
    if (full_next_move != NULL)
    {
        next_move *n_next_move = malloc(sizeof(next_move));
        initStructureNextMove(n_next_move,pieceToMove,positionToEnd,nbPieceTaken);
        if(n_next_move!=NULL){
            if (full_next_move->_next == NULL)
            {
                n_next_move->_previous = full_next_move;
                n_next_move->_next = NULL;
                node->_next = n_next_move;
            }
        }
    }else{
        next_move *n_next_move = malloc(sizeof(next_move));
        initStructureNextMove(n_next_move,pieceToMove,positionToEnd,nbPieceTaken);
    }
}

int getIfMoveIsLegalForced(int * move, next_move*full_next_move){
    if(full_next_move==NULL)return 1;
    full_next_move=goToFirstMove(full_next_move);
    int isMoveLegal=0;
    while(full_next_move->_next!=NULL){
        if(full_next_move->positionToEnd[0]==move[0]&&full_next_move->positionToEnd[1]==move[1]){
            isMoveLegal=1;
        }
        full_next_move= full_next_move->_next;
    }
    return isMoveLegal;

}

void deleteFirstMove(next_move *full_next_move){//Used to remove the first element that is a placeholder
    full_next_move=goToFirstMove(full_next_move);
    next_move next_move_next= full_next_move->_next;
    free(full_next_move);
    full_next_move->_previous=NULL;
}

void deleteAllMoves(next_move *full_next_move)
{
    if(full_next_move==NULL)return ;
    full_next_move=goToFirstMove(full_next_move);

    while(full_next_move->_next!=NULL){
        next_move next_move_next= full_next_move->_next;
        free(full_next_move);
        full_next_move= next_move_next;
    }
    if(full_next_move!=NULL){
        free(full_next_move);
    }
}

next_move goToFirstMove(next_move *nextMove){
    while (nextMove->_previous != NULL)
    {
        nextMove = nextMove->_previous;
    }

    return(nextMove);
}

next_move goToLastMove(next_move *nextMove){
    while (nextMove->_next != NULL)
    {
        nextMove = nextMove->_next;
    }

    return(nextMove);
}

int count(next_move *nextMove){
    full_next_move=goToFirstMove(full_next_move);
    while(full_next_move->_next!=NULL){
        count++;
    }
    return count;
}