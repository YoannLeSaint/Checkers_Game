#ifndef UTILS_H_
#define UTILS_H_

// SYSTEME INCLUDE(S)
#include <stdio.h>
#include <stdlib.h>

// STRUCTURE(S)

// LOCAL INCLUDE(S)

// PROTOTYPE(S)
void initChecker(char checker[10][10], char * saving);
int* recurciveKing_checkPiece(char** checker,int* kingPosition,int* targetPosition,int* foundPiece, int nbLoop);
int movePawn(char** checker, int* oldPosition, int* newPosition);

void showChecker(char checker[10][10]);
int countPieces(char** checker,char side);

#endif /* !UTILS_H_ */